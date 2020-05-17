#ifndef _FERRARI_BUILDER_H_
#define _FERRARI_BUILDER_H_

#include <string>
#include "i_car_builder.h"
#include "car.h"

class FerrariBuilder: public ICarBuilder {
public:
	Car* GetResult() override
	{
		return (m_num_doors == 2)? new Car("Ferrari", "488 Spider", m_color, m_num_doors) : nullptr;
	}
	
};

#endif // _FERRARI_BUILDER_H_
