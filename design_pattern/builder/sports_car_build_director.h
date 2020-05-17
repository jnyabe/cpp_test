#ifndef _SPORTS_CAR_BUILD_DIRECTOR_H_
#define _SPORTS_CAR_BUILD_DIRECTOR_H_

#include "i_car_builder.h"

class SportsCarBuildDirector
{
private:
	ICarBuilder* m_builder;
public:
	SportsCarBuildDirector(ICarBuilder *builder): m_builder(builder) {}
	void Construct()
	{
		m_builder->m_color = "Red";
		m_builder->m_num_doors = 2;
	}
						   
};
#endif /* _SPORTS_CAR_BUILD_DIRECTOR_H_ */
