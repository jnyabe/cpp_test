#include <iostream>
#include "ferrari_builder.h"
#include "sports_car_build_director.h"


int main(int argc, const char* argv[])
{
	FerrariBuilder *builder = new FerrariBuilder();
	SportsCarBuildDirector* director = new SportsCarBuildDirector(builder);

	director->Construct();
	Car* myRaceCar = builder->GetResult();
	if(myRaceCar == nullptr)
	{
		std::cout << "myRaceCar is null!" << std::endl;
		return -1;
	}
	myRaceCar->Dump();
	return 0;
}
