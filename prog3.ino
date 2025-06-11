int Input = A0;
int SensorVal = 0;
int buzzer=11;
void setup() {
Serial.begin(9600);
pinMode(Input, INPUT);
pinMode(buzzer,OUTPUT);
}
void loop() {
SensorVal = analogRead(Input);
Serial.println(SensorVal);
delay(500);
if(SensorVal>600)
{
digitalWrite(buzzer,HIGH);
}
else
{
    digitalWrite(buzzer,LOW);
}
}