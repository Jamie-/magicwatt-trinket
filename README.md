# IoT Energy Monitor - Trinket #

Code for the Adafruit Trinket part of my IoT home energy monitor.

Go checkout the main project [here](https://github.com/Jamie-/magicwatt-api) for details about what it's used for.

# Requirements #
You'll need the following libraries to use this. The easiest way to use them is to put all the files detailed here inside the project folder containing the Arduino `.ino` file (you might need to restart the IDE for it to find them after adding them).

Make sure you've also setup your Arduino IDE properly to program the Trinket board, more info on the Adafruit website [here](https://learn.adafruit.com/adafruit-arduino-ide-setup/overview).

* EmonLib - `EmonLib.cpp` & `EmonLib.h` from [here](https://github.com/openenergymonitor/EmonLib)
* TinyWireS - `TinyWireS.cpp`, `TinyWireS.h`, `usiTwiSlave.c` & `usiTwiSlave.h` from [here](https://github.com/rambo/TinyWire)
