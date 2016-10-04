/*
this is a library to use an ultrasonic sensor hcsr-04 return the distance in CM
this example will print the distance in CM in the serial monitor :D
made by Yeffri J. Salazar, Najt labs Guatemala 2016
*/

#include <ultrasonicSensor.h>
ultrasonicSensor sensor1(10,11);//trigger pin, echo pin

void setup() {
Serial.begin(9600);
}

void loop() {
  Serial.println(sensor1.distance());
  delay(1000);
}
