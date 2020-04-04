//IR with LED, as soon as the IR is on, the LED is on
void setup()
{
pinMode(8, INPUT);        // Input for sensor readings.
PinMode(9, OUTPUT);         // Output to turn LED on
}

void loop()
{
 
If(pinMode(8))
{
digitalWrite(9, HIGH);
delay(500);
}
else
{
  digitalWrite(9, LOW);
  delay(500);
}
delay(50);
