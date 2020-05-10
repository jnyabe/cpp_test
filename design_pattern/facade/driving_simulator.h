#ifndef _DRIVING_SIMULATOR_H_
#define _DRIVING_SIMULATOR_H_

#include <iostream>
#include "car.h"
#include "driver.h"

class DrivingSimulator {
private:
	Car m_car;
	
public:
	DrivingSimulator() {}
	~DrivingSimulator() {}
	void Simulate()
	{
		Car car;
		Driver driver(car);
		driver.PushPedal(700);
		driver.Drive(30);
		driver.PushPedal(750);
		driver.Drive(20);
		std::cout << "The travel distance is "
				 << car.GetDistance() << " m." << std::endl;
	}
};

#endif // _DRIVING_SIMULATOR_H_
