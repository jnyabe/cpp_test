#include "context.h"
#include "strategy.h"

Context::~Context()
{
	m_strategy = nullptr;
}

void Context::execute(void)
{
	if(m_strategy.get())
	{
		m_strategy->execute();
	}
}
