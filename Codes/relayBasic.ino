//RELAY SWITCH


void setup() {
  // put your setup code here, to run once:
pinMode(9, OUTPUT);
digitalWrite(9, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(9, HIGH);
delay(50);
digitalWrite(9, LOW);
delay(3000);
digitalWrite(9, HIGH);
delay(1000);
}
