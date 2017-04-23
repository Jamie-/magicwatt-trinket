#include "TinyWireS.h"
#include "EmonLib.h"
#include <math.h>

#define I2C_SLAVE_ADDRESS 0x04

volatile byte dat;

EnergyMonitor em;

void onRequest()
{
  TinyWireS.send(dat);
}

void setup()
{
    TinyWireS.begin(I2C_SLAVE_ADDRESS);
    TinyWireS.onRequest(onRequest);

    em.current(2, 60.6);
}

void loop()
{
    uint16_t i = round(em.calcIrms(1480));
    dat = lowByte(i);
    //if (i > 512) dat = 0xFF;

    TinyWireS_stop_check();
}
