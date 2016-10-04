/*
this is a library to use an ultrasonic sensor hcsr-04 return the distance in CM

made by Yeffri J. Salazar, Najt labs Guatemala 2016
*/

#include <ultrasonicSensor.h>
//this function is to setup the pins
ultrasonicSensor::ultrasonicSensor(uint8_t trigger, uint8_t echo)
{
	_trigger = trigger;
	_echo = echo;
	pinMode(_trigger,OUTPUT);
	pinMode(_echo,INPUT);

}
// this function return the distance in CM
 uint16_t ultrasonicSensor::distance(){
int32_t _time;
int32_t _distance;
  digitalWrite(_trigger,LOW); 
  delayMicroseconds(5);
  digitalWrite(_trigger, HIGH); 
  delayMicroseconds(10);
  _time=pulseIn(_echo, HIGH); 
   _distance= int(0.017*_time);
	return _distance;
}
