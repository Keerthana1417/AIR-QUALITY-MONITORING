void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A1);

  Serial.print("AQI=");
  Serial.print(sensorValue, DEC);
  Serial.println("PPM");
  Serial.println(" ");
  delay(1000);
}
