//LDR

// Note that this code needs you to use a voltage divider circuit

void setup() {
   /* Define baud rate for serial communication */
    Serial.begin(9600);
    pinMode(A0, INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
Serial.println(analogRead(A0));
delay(2000);
}
