#ifndef _DRIVER_H_
#define _DRIVER_H_

#include "car.h"

class Driver {
private:
	Car& m_car;
	
public:
	Driver(Car& car): m_car(car) {}
	void PushPedal(int speed) { m_car.SetSpeed(speed);}
	void Drive(int minutes) { m_car.Run(minutes);}
};

#endif // _DRIVER_H_
