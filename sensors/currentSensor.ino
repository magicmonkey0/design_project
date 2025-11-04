void setup() {
  Serial.begin(9600);
}

void loop() {
  int aDC = analogRead(A0);
  float average = 0;

  for (int i = 0; i < 1000; i++)
  {
    average = average + (0.0264 * aDC - 13.51) / 1000;
    delay(1);
  }
  
//  float voltage = (aDC / 1023.0) * 5;
//  float current = (voltage - 2.5) / 0.066; // for 30A max type

  Serial.print("Current : ");
  Serial.println(average);
  delay(500);
}
