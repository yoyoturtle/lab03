float R1=2.02,R2=972000;

const int analogInPin=A2;
 double ResisterValue = 106.67*1000; //量測可變電阻的最大值 (R1+R2)
// the loop routine runs over and over again forever:

    int  Vin = 5;
    float sensorValue = 0;
    float sensorVoltage;
    float r1,r2;
 
 
/* for (int i=0;i<20;i++) {
        for (int k=0;k<5;k++)  {
  
   sensorValue = 0.7* sensorValue + 0.3* analogRead(analogInPin);}*/
 
 
/*sensorVoltage = sensorValue * 5 / 1024;
R1= sensorVoltage*ResisterValue/Vin;*/


//Calculate R1 by sensorVoltage = Vin * R1 / (R1+R2)
//Output sensorValue, sensorVoltage, and R1 to serial
//Sleep 0.5 seconds
    
        
void setup() {
  // initialize the digital pin as an output.
  Serial.begin(9600);
    
}
    

// the loop routine runs over and over again forever:
void loop() {
  for (int i=0;i<5;i++) 
      {
       sensorValue = 0.7* sensorValue + 0.3* analogRead(analogInPin); 
  sensorVoltage = sensorValue * 5 / 1024 ;
  //Output sensorVoltage to serial
   Serial.print("sensor = ");
   Serial.println(sensorValue);
   delay(250);
      } 
      Serial.print("sensorVoltage = " );
        Serial.println(sensorVoltage); 
        Serial.print("sensorValue = " );
        Serial.println(sensorValue); 
        Serial.print("R1= " );
        Serial.println(R1);
        delay(1000);
    }


