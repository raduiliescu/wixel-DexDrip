/** DEXDRIP Translator:
  sends over bluetooth fake date in same format as dexdrip app
  this is intendet to test dexdrip android app
  RAWREADING TRANSMITTERBATTERY WIXELBATTERY

  The green LED indicates that data was just sent

  rawreading can be constant or up/down in interval 7000 - 19000 with configurable rate
  upload time interval is configurable in miliseconds
  transmitterbattery is constant configurable
  wixelbattery 
  
  == Parameters ==
  param_rawdata: how rawdata is going can be constant(0), raising(-rate) or lowering(rate);
  raw: initial rawdata value;
  transmitter_battery: transmitter battery value;
  wixel_battery: 0 get value using 
*/


/** Dependencies **************************************************************/
/*#define DEBUG*/
#include <cc2511_map.h>
#include <board.h>
#include <random.h>
#include <time.h>
#include <usb.h>
#include <usb_com.h>
#include <gpio.h>
#include <uart1.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <adc.h>

int32 CODE param_rawdata_rate        = 0;
int32 CODE param_rawdata             = 10000;
uint8 CODE param_transmitter_battery = 200;
uint8 CODE param_wixel_battery       = 0;
uint32 CODE param_interval_ms        = 20000;

uint8 usbEnabled = 1;

void uartEnable() {
    U1UCR |= 0x40; //CTS/RTS ON
    delayMs(1000);
}

void uartDisable() {
    LED_GREEN(1);
    delayMs(2000);
    U1UCR &= ~0x40; //CTS/RTS Off
    LED_GREEN(0);
    U1CSR &= ~0x40; // Recevier disable
}

void doServices()
{
    if(usbEnabled) {
        boardService();
        usbComService();
    }
}

void initUart1() {
    uart1Init();
    uart1SetBaudRate(9600);
}

void print_packet(int32 raw, uint8 dex_battery, int32 wixel_battery) {
    uartEnable();
    printf("%lu %hhu %d", raw, dex_battery, wixel_battery);
    uartDisable();
}

void makeAllOutputs() {
    int XDATA i;
    for (i=6; i < 16; i++) { // in the future, this should be set to only the channels being used for output, and add the one for input
        setDigitalOutput(i, LOW);
    }
}

void putchar(char c) {
    uart1TxSendByte(c);
    if (usbEnabled)
        usbComTxSendByte(c);
}

void setADCInputs() {
    P0INP=0; //set pull resistors on pins 0_0 - 0_5 to low
}

void configBt() {
    uartEnable();
    printf("AT+NAMEDexDrip2");
    uartDisable();
}

void main() {
    uint32 lastToggle;
    systemInit();

    initUart1();
    P1DIR |= 0x08; // RTS
    makeAllOutputs();
    setADCInputs();

    delayMs(4000);
    configBt();

    lastToggle = getMs();
    while(1) {
        boardService();
        if (getMs() - lastToggle >= param_interval_ms)
        {
            int32 wixel_battery = param_wixel_battery?param_wixel_battery:adcConvertToMillivolts(adcRead(5));
            print_packet(param_rawdata, param_transmitter_battery, wixel_battery);
            lastToggle = getMs();
            LED_RED(!LED_RED_STATE);
        }
        doServices();
        USBPOW = 1;
        USBCIE = 0b0111;
    }
}
