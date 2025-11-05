# Current Sensor

Learning, testing, and experimenting with the current sensor module with Arduino Uno.

---

## The Current Sensor Module
- ACS712 AC and DC current sensor module detector
- Hall Effect: the sensor measures current using the hall effect (Edwin Hall who discovered the means of measuring, late 1800s)
- the hall effect: when an amount of currect passes through somewhere, the current gives off a degree of magnitism which is
  linear with the amount of current that passes through a conductor. The sensor has a blackbox component that calculates this
- Pins
  1. Vcc = voltage/power
  2. OUT = output (analog data)
  3. GND = ground
- use a power supply to change the amps to test the current sensor

---

## Reference Diagrams

<img width="500" alt="images-2" src="https://github.com/user-attachments/assets/56a973c8-e8ab-41ef-8b08-5aa5b94cd824" />

<img width="645" height="297" alt="Pinouts-of-current-sensor-2" src="https://github.com/user-attachments/assets/e3b6646e-2c06-473f-b456-da96aad061a4" />

---

## Images

1. The ACS712

<img width="400" alt="digram4" src="https://github.com/user-attachments/assets/25093f27-88cc-4801-92b9-43c53954b2c2" />


2. The circuit: current sensor is wired in SERIES with a 220 ohm reisstor, blue LED, and a switch

<img width="400" alt="digram4" src="https://github.com/user-attachments/assets/229ade53-be1a-4f74-8fa1-deaecff3dced" />


- the switch is there to test for current spikes (a mechanism needed for the build)
- so, when the switch is OFF, the LED is OFF, so the current sensor just measures the base current when the LED is OFF
- when the switch is ON, the circuit path is closed, allowing current to flow for the first time
- this causes a sudden demand for current from the power source as the circuit transisions from "open" (no current) to "closed" (current flowing)
- the current spike is also known as **inrush current**
- LEDs are diodes, when forward-biased, they suddenly conduct once voltage reaches their threshold
- the moment it starts conducting, the current can jump quickly, limit only by the resistor

  - forward-biased: an electrical configuration that applies a voltage across a diode in a way that allows current to flow through it.
   This is achieved by connecting the anode to the cathod (completing the circuit as well, like with the switch)
  - blue LED has a forward voltage of 3.0V to 3.6V
 
---

## Pseudocode/idea

basically, when the actuator compresses and it reaches compacted garbage, the actuator will try to push more, <br>
however, it can't, this would spike the current significantly (a condition known as **stalling**), <br>
use the current sensor to detect this spike as a condition for the resistance threshold to tell the actuator to stop compressing and retract

---

## Credits

youtube
