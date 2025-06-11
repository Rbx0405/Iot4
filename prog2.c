int IRPin = 3;
int led=13;
int value;
void setup(){
pinMode(IRPin, INPUT);
Serial.begin(9600);
pinMode(13,OUTPUT);
}
void loop(){
value = digitalRead(IRPin);
Serial.println(value);
if(digitalRead(IRPin)==1)
digitalWrite(led,HIGH);
else
digitalWrite(led,LOW);
}