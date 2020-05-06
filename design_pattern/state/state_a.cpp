#include <iostream>
#include "state_a.h"
#include "state_b.h"
#include "debug.h"

void StateA::writeName(StateContext &stateContext, const std::string &name)
{
	std::cout << toLower(name) << std::endl;
	stateContext.setState(new StateB());
}

