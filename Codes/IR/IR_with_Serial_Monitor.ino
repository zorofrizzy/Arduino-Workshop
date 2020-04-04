//IR SENSOR WITH SERIAL MONITOR


void setup() {
  // put your setup code here, to run once:
pinMode(8, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

if(digitalRead(8)==1)
{
  Serial.println("ON");
  delay(100); 
}
else
{
  Serial.println("OFF");
  delay(100);
}
delay(20);  
}
