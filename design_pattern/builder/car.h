#ifndef _CAR_H_
#define _CAR_H_

#include <string>
#include <iostream>
class Car
{
public:
	std::string m_make;
	std::string m_model;
	std::string m_color;
	int m_num_doors;
	
	Car(const std::string& make, const std::string& model,
		const std::string& color, int num_doors)
		: m_make(make), m_model(model), m_color(color), m_num_doors(num_doors)
	{
		
	}

	void Dump(void) const
	{
		std::cout << "make: " << m_make << std::endl;
		std::cout << "model: " << m_model << std::endl;
		std::cout << "color: " << m_color << std::endl;
		std::cout << "#doors: " << m_num_doors << std::endl;
	}
};

#endif // _CAR_H_
