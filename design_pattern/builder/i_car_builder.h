#ifndef _I_CAR_BUILDER_H_
#define _I_CAR_BUILDER_H_

#include <string>
#include "car.h"

class ICarBuilder {
public:
	std::string m_color;
	int m_num_doors;
	
	virtual Car* GetResult() = 0;
	
};

#endif // _I_CAR_BUILDER_H_
