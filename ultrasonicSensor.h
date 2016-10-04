/*
this is a library to use an ultrasonic sensor hcsr-04 return the distance in CM

made by Yeffri J. Salazar, Najt labs Guatemala 2016
*/

#ifndef ultrasonicSensor_h
#define	ultrasonicSensor_h
#include <Arduino.h>

class ultrasonicSensor
{
	public:
		ultrasonicSensor(uint8_t trigger, uint8_t echo);
		uint8_t distance();
	private:
		uint8_t _trigger;
		uint8_t _echo;	
};

#endif
