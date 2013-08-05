
int Alert = 2;        //  Connect Alert!! LED
int infraRed = A0;    //  Infra Red Receiver (Photo Diode)
void setup()                   
{                              
  pinMode(infraRed, INPUT);
  Serial.begin(9600);           
}  
 
void loop()                                  
{
  int x = analogRead(infraRed);
  Serial.println(x);
  if(x > 1020)         //  Since Arduino has 10-bit ADC,
                       //  the range of input from IR Rx (Photo Diode) would be between 0 - 1024.
                       //  you will find that when an obstacle is detected,
                       //  the value in Serial Monitor is just close to 1024 (i.e., HIGH).
                       //  It works when both IR Tx and IR Rx (Photo Diode) are upto 6 inches apart.
    digitalWrite(Alert, HIGH);
  else
    digitalWrite(Alert, LOW);
}
