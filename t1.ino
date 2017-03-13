void setup()
{ 
Serial.begin(9600);
}


void loop() 
{ 
float Analogin=0;
int i;
float Vin=0;
for(int i=0 ; i<=5;i++ ) 
{ 
  Analogin=analogRead(A1);
Analogin = 0.7*Analogin + 0.3* analogRead(A0);
}
Vin = Analogin * 5/1024;

Serial.println(Vin); 
Serial.println("\n"); 
delay(500);
 
}
