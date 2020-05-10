#ifndef _CAR_H_
#define _CAR_H_
#include <iostream>
class Car {
private:
	int m_speed;
	int m_distance;
public:
	Car(): m_speed(0), m_distance(0) {}
	Car(const Car& car): m_speed(car.m_speed), m_distance(car.m_distance) {}
	void SetSpeed(int speed) { m_speed = speed; }
	void Run(int minutes) { m_distance += minutes * m_speed; }
	int GetDistance() { return m_distance;}
};

#endif // _CAR_H_
