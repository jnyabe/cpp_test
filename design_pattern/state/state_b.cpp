#include <iostream>
#include "state_a.h"
#include "state_b.h"
#include "debug.h"

void StateB::writeName(StateContext &stateContext, const std::string &name)
{
	std::cout << toUpper(name) << std::endl;
	if(++m_count>1)
	{
		stateContext.setState(new StateA());
	}
}

