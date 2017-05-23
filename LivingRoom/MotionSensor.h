// MotionSensor.h

#ifndef _MOTIONSENSOR_h
#define _MOTIONSENSOR_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif


#endif

class MotionSensor {
private:
	int MOTION_SENSOR;
protected:
public:
	unsigned long lastMotionDetected;
	MotionSensor(int);
	bool IsMotionDetected();

};

