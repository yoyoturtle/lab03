int Vin = 5; 
 const int analogInPin = A3;
 const int analogInPin1 = A2; 
 double sensorValue = 0; 
 double sensorValue1 = 0;
 double sensorVoltage = 0; 
 double sensorVoltage1 = 0; 
 double ResisterValue = 1000; 
 double ResisterValue1 = 981300;
 double R2,R1; void setup() {
 Serial.begin(9600); 
 for(int i=1;i<=5;i++) { 
 sensorValue += analogRead(analogInPin); 
 } 
 sensorValue = sensorValue/5; 
 } 
 void loop() 
 { 
   for(int i=1;i<=20;i++) 
 {
 for(int i=1;i<=5;i++) 
 { 
 sensorValue = 0.7* sensorValue + 0.3 * analogRead(analogInPin); 
 sensorValue1 = 0.7* sensorValue1 + 0.3 * analogRead(analogInPin1); 
 } 
 sensorVoltage = sensorValue * 5 / 1024; 
 sensorVoltage1 = sensorValue1 * 5 / 1024; 
 R2 = (sensorVoltage * ResisterValue)/(Vin-sensorVoltage); 
 R1 = 981300 - (sensorVoltage1 * ResisterValue1)/Vin; Serial.print("sensorValue = "); 
 Serial.println(sensorValue1); Serial.print("sensorVoltage = "); 
 Serial.println(sensorVoltage1); Serial.print("Potentiometer = "); 
 Serial.println(R1); 
 Serial.println("--------------"); 
 Serial.print("LDR = "); Serial.println(R2); 
 Serial.println("**************"); 
 delay(500); 
 } 
 delay(1000); 
 }
