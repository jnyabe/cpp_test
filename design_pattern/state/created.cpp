#include "created.h"
#include "started.h"
#include "debug.h"

Created::Created()
{
	TRACE();
}
Created::~Created()
{
	TRACE();
}
State* Created::Process(void)
{

	return new Started();
}

int Created::Cancel(void)
{
	return State::Cancel();
}

int Created::GetProgress(void)
{
	return 0;
}
