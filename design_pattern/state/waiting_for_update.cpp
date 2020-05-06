#include "waiting_for_update.h"
#include "waiting_for_update_mode.h"
#include "debug.h"

WaitingForUpdate::WaitingForUpdate()
{
	TRACE();
}

WaitingForUpdate::~WaitingForUpdate()
{
	TRACE();
}

State* WaitingForUpdate::Process(void)
{
	return new WaitingForUpdateMode();
}

int WaitingForUpdate::Cancel(void)
{
	return State::Cancel();
}

int WaitingForUpdate::GetProgress(void)
{
	return 0;
}
