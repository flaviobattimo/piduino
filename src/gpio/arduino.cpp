/* Copyright © 2018 Pascal JEAN, All rights reserved.
 * This file is part of the Piduino Library.
 *
 * The Piduino Library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * The Piduino Library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with the Piduino Library; if not, see <http://www.gnu.org/licenses/>.
 */

#include <piduino/arduino.h>

using namespace Piduino;

#if 0
// -----------------------------------------------------------------------------
void pinMode (int n, ArduinoPinMode mode) {
  Pin::Pull p = Pin::PullOff;
  Pin::Mode m = Pin::ModeOutput;

  if (mode != OUTPUT) {

    m = Pin::ModeInput;
    if (mode == INPUT_PULLUP) {
      p = Pin::PullUp;
    }
    else if (mode == INPUT_PULLDOWN) {
      p = Pin::PullDown;
    }
  }

  if (gpio.open()) {
    gpio.pin (n).setMode (m);
    gpio.pin (n).setPull (p);
  }
}

// -----------------------------------------------------------------------------
void digitalWrite (int n, int value) {

  gpio.pin (n).write (value);
}

// -----------------------------------------------------------------------------
void digitalToggle (int n) {

  gpio.pin (n).toggle ();
}

// -----------------------------------------------------------------------------
int digitalRead (int n) {

  return gpio.pin (n).read();
}

// -----------------------------------------------------------------------------
void attachInterrupt (int n, Pin::Isr isr, ArduinoIntEdge mode) {

  gpio.pin (n).attachInterrupt (isr, static_cast<Pin::Edge> (mode));
}

// -----------------------------------------------------------------------------
void detachInterrupt (int n) {

  gpio.pin (n).detachInterrupt();
}

// -----------------------------------------------------------------------------
void delay (unsigned long ms) {

  clk.delay (ms);
}

// -----------------------------------------------------------------------------
void delayMicroseconds (unsigned long us) {

  clk.delayMicroseconds (us);
}

// -----------------------------------------------------------------------------
unsigned long millis() {

  return clk.millis();
}

// -----------------------------------------------------------------------------
unsigned long micros() {

  return clk.micros();
}
#endif
/* ========================================================================== */
