#include <iostream>
#include "context.h"
#include "created.h"
#include "debug.h"

Context::Context()
	:m_state(nullptr)
{
	TransitionTo(new Created());
}

Context::~Context()
{
	delete m_state;
}

void Context::TransitionTo(State* state)
{
	//	std::cout << "Context: Transition to " << typeid(*state).name() << std::endl;
	if(m_state)
	{
		delete m_state;
	}
	m_state = state;
}

void Context::Run(void)
{
	while(m_state)
	{
		State* newState = m_state->Process();
		if(newState == nullptr)
		{
			break;
		}
		TransitionTo(newState);
	}

}
