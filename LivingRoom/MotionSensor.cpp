// 
// 
// 

#include "MotionSensor.h"

MotionSensor::MotionSensor(int motionPin) {
	MOTION_SENSOR = motionPin;
	pinMode(MOTION_SENSOR, INPUT);
}

bool MotionSensor::IsMotionDetected() {
	return digitalRead(MOTION_SENSOR) == HIGH;
}
