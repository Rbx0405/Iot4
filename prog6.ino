void setup() {
Bluetooth.begin(9600);
Serial.begin(9600);
Serial.println("Waiting for command...");
Bluetooth.println("Send 1 to turn on the LED. Send 0 to turn Off");
pinMode(LED,OUTPUT);
}
void loop() {
if (Bluetooth.available()){ //wait for data received
Data=Bluetooth.read();
if(Data=='1'){
digitalWrite(LED,1);
Serial.println("LED On!");
Bluetooth.println("LED On!");
}
else if(Data=='0'){
digitalWrite(LED,0);
Serial.println("LED Off!");
Bluetooth.println("LED On D13 Off ! ");
}
else{;}
}
delay(100);
}