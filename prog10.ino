const int trigPin = 9;
const int echoPin = 10;
const int redPin = 2;
const int greenPin = 3;
const int whitePin = 4;
void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(whitePin, OUTPUT);
}
void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
int duration = pulseIn(echoPin, HIGH);
int distance = duration * 0.034 / 2;
if (distance < 50) { // Clap detected
digitalWrite(redPin, HIGH); // Red on

digitalWrite(greenPin, LOW); // Green off
digitalWrite(whitePin, LOW); // White off
delay(500);
digitalWrite(redPin, LOW); // All off
digitalWrite(greenPin, HIGH); // Green on
digitalWrite(whitePin, LOW); // White off
delay(500);
digitalWrite(redPin, LOW); // All off
digitalWrite(greenPin, LOW); // Green off
digitalWrite(whitePin, HIGH); // White on
delay(500);
digitalWrite(redPin, LOW); // All off
digitalWrite(greenPin, LOW); // Green off
digitalWrite(whitePin, LOW); // White off
delay(500);
}
}