#include <Servo.h>

int servoPin = 3; 
int factor = 5;
Servo Servo1;

void setup() { 
   Serial.begin(9600); 
   Servo1.attach(servoPin); 
}

void loop(){ 
    int val = analogRead(A1);
    val = val / factor;
    int pos = min(val, 180);
    Serial.print(val);
    Serial.print(" - ");
    Serial.print(pos);
    Serial.print("\n");
    Servo1.write(pos);
    delay(333);
  }
