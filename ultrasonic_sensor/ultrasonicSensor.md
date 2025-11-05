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
  - units: cm
 
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

## Pseudocode
~~~
  int baseDistance = the sensor will constantly be reading the distance to the bin

  when something passes through the sensor (someone throwing away garbage) and the sensor detects a change in distance --> delay for a few seconds

  if the distance measured after delay is equal to the baseDistance
  {
    continue measuring
  }
  
  else if the distance measured after the delay is somewhere shorter than the baseDistance, this means that the bin is at full threshold
  {
    stop measuring: digitalWrite(trigPin, LOW)
    turn on LED indicator for compression LED = RED
    activate compression
  }

  when compression is done, it should send a signal back to the arduino letting it know and then start measuring again with the ultrasonic sensor
  when compression is not on, indicate safe to use LED = GREEN
  
  if the distance after compression is less than the baseDistance, then something is still in its way
  {
    1. one more compression to make sure?
    2. then the bin is full --> turn off sensor and actuator (dont waste power) and turn on LED indicator to signal full/ready for disposal, LED = WHITE
  }

~~~
---

## Images and observations

1. the board

<img width="500" alt="images-2" src="https://github.com/user-attachments/assets/ca9d2429-880a-4a35-a033-a7d1a614d518" />

2. distance measuring + serial monitor
  - observation: it's very accurate!!
  - the lipstick is placed 5cm away from the ultrasonic sensor on the ruler at the 5cm mark and the sensor picks up 5cm!

<img width="500" alt="images-2" src="https://github.com/user-attachments/assets/e95d985e-5bdb-4848-9da6-e88be26fa2ce" />

<img width="500" alt="images-2" src="https://github.com/user-attachments/assets/18d742cd-25aa-4acb-89b0-38662d8c08cc" />


---

## Credits

https://youtu.be/KGwtit2bFyo?si=CqvPlKD_5MI1VJm7
