void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  Serial.println("light level=");
  Serial.println(analogRead(A0));
  if (analogRead(A0) < 300) {
    digitalWrite(2, HIGH);
    delay(500);
  } else {
    digitalWrite(2, LOW);
  }
  Serial.println("motion=");
  Serial.println(digitalRead(3));
  if (digitalRead(3) == 1) {
    digitalWrite(5, HIGH);
    delay(500);
  } else {
    digitalWrite(5, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}