#include <iostream>
#include "concrete_creator_1.h"
#include "concrete_creator_2.h"


void ClientCode(const Creator& creator){
	std::cout << "Client: I'm not aware of the creator's class, but it still works.\n"  << creator.SomeOperation() << std::endl;
}

int main()
{
	std::cout << "App: Launched with the ConcreteCreator1." << std::endl;
	Creator* creator = new ConcreteCreator1();
	ClientCode(*creator);
	std::cout << std::endl;
		
	std::cout << "App: Launched with the ConcreteCreator2." << std::endl;
	Creator* creator2 = new ConcreteCreator2();
	ClientCode(*creator2);
	std::cout << std::endl;

	delete creator;
	delete creator2;
	return 0;
}
