#include <dummy.h>

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);  // delay in between reads for stability
}
