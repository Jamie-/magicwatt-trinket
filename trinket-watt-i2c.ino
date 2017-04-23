#include "TinyWireS.h"
#include "EmonLib.h"
#include <math.h>

// I2C bus address
#define I2C_SLAVE_ADDRESS 0x04

// Pin used for the current sensing circuitry.
int currentPin = 2;

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

    em.current(currentPin, 60.6);
}

void loop()
{
    uint16_t i = round(em.calcIrms(1480));
    dat = lowByte(i); // Gives a maximum usable value of 256 amps
    //if (i > 512) dat = 0xFF;

    TinyWireS_stop_check();
}
