#include "waiting_for_update_mode.h"
#include "debug.h"

WaitingForUpdateMode::WaitingForUpdateMode()
{
	TRACE();
}

WaitingForUpdateMode::~WaitingForUpdateMode()
{
	TRACE();
}

State* WaitingForUpdateMode::Process(void)
{
	return nullptr; // end of state machine
}

int WaitingForUpdateMode::Cancel(void)
{
	return State::Cancel();
}

int WaitingForUpdateMode::GetProgress(void)
{
	return 0;
}
