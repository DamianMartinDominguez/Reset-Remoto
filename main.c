int pinled=16;

void setup() {
  pinMode(pinled,OUTPUT);
}

void loop() {
  digitalWrite(pinled,HIGH);
  delay(1000);
  digitalWrite(pinled,LOW);
  delay(1000);

  
}
