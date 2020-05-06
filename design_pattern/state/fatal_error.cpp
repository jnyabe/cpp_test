#include "fatal_error.h"


FatalError::FatalError()
{
}
FatalError::~FatalError()
{
}
State* FatalError::Process(void)
{
	return nullptr;
}

int FatalError::Cancel(void)
{
	return State::Cancel();
}

int FatalError::GetProgress(void)
{
	return 0;
}
