#include <iostream>
#include "singleton.h"

int main(int argc, const char* argv[])
{
	for(int i=0; i< 10; i++)
	{
		std::cout << Singleton::getInstance().getString() << std::endl;
	}
	return 0;
}
