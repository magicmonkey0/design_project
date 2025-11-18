byte speed = 0;
int RPWM = 10;
int LPWM = 11;

void setup() {
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);

}

void loop() {
  if(digitalRead(2) == HIGH & digitalRead(3) == LOW)
  {
    // retract actuator at half speed
    speed = 127;
    analogWrite(10, 0 );
    analogWrite(11, speed);
  }
  else if(digitalRead(2) == LOW & digitalRead(3) == HIGH)
  {
    // extend actuator at full speed
    speed = 255;
    analogWrite(10, speed);
    analogWrite(11, 0);
  }
  else
  {
    // stop actuator
    analogWrite(10, 0);
    analogWrite(11, 0);
  }

}
