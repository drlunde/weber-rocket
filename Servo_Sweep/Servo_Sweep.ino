// this is a change to brandon's branch


#include <Arduino.h>
#include <Servo.h> 
 
Servo myservo1;
Servo myservo2;

int pos = 0; 
// int pos2 = 180;
const float end1 = 180; // defines endpoint 1
// const float end2 = 90; // defines endpoint 2
 
void setup() 
{ 
  myservo1.write(pos);
  myservo2.write(pos);
  myservo1.attach(9);
  myservo2.attach(10);
}

void loop() 
{ 
  for(pos = 0; pos <= end1; pos += 1) 
  {                                  
    myservo1.write(pos);
    myservo2.write(pos);              
    delay(15);                       
  } 
  for(pos = end1; pos >= 0; pos -= 1)    
  {                                
    myservo1.write(pos);
    myservo2.write(pos);           
    delay(15);                      
  } 
} 