#include "waiting_for_eula.h"
#include "waiting_for_update.h"
#include "debug.h"

WaitingForEula::WaitingForEula()
{
	TRACE();
}

WaitingForEula::~WaitingForEula()
{
	TRACE();
}

State* WaitingForEula::Process(void)
{
	return new WaitingForUpdate();
}

int WaitingForEula::Cancel(void)
{
	return State::Cancel();
}

int WaitingForEula::GetProgress(void)
{
	return 0;
}
