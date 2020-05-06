#include "state_context.h"
#include "state_a.h"

StateContext::StateContext(): m_state(new StateA())
{
	
}

StateContext::~StateContext()
{
	delete m_state;
}

void StateContext::setState(State *newState)
{
	if(m_state)
	{
		delete m_state;
	}
	m_state = newState;
}

void StateContext::writeName(const std::string& name)
{
	if(m_state) m_state->writeName(*this, name);
}
