# Ultrasonic Sensor

Learning, testing, and experimenting with the ultrasonic sensor module with Arduino Uno.
Goal: used to detect fullness of the garbage.
  Executions:
    - by making it face into the bin detecting how full it is (problem: can only measure one small area)
    - by placing it so it scans across the bin -- will need to add a delay

---

## The ultrasonic sensor and how it works
- uses sound waves to measure the distance of solid objects
- transducer/transmitter (left) -- emits high frequency (above human hearing) ultrasound soundwaves.
  these sound waves bounce off an object and bounce back = "echoing"
- the echo pulse will be detected by the reciever (right)
- when the module emits the sound, the module will output a HIGH signal, when the echo is recieved, it will output a LOW signal
- the arduino will read the length of this pulse and determine the distance based on the speed of sound
- Distance = (speed of sound * time) / 2 (from sensor to object)
  - speed = 343 m/s
 
<img width="500" alt="images-2" src="https://github.com/user-attachments/assets/39af2114-dc11-451b-8b7a-a157bf582c05" />

- 4 pins:
  1. Vcc = power pin --> 5V
  2. Trig = trigger, send signal --> PWM
  3. Echo = recieves timing pulse --> PWM
  4. GND = power pin --> ground
 
- limitations
  - accurate within +/- 3mm
  - can measure up to 2-400cm
  - only works with 5V
  - need greater range and accuracy: LiDARs
 
---

## Images


---

## Credits

https://youtu.be/KGwtit2bFyo?si=CqvPlKD_5MI1VJm7
