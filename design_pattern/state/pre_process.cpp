#include "pre_process.h"
#include "waiting_for_eula.h"
#include "debug.h"

PreProcess::PreProcess()
{
	TRACE();
}

PreProcess::~PreProcess()
{
	TRACE();
}

State* PreProcess::Process(void)
{
	return new WaitingForEula();
}

int PreProcess::Cancel(void)
{
	return State::Cancel();
}

int PreProcess::GetProgress(void)
{
	return 0;
}
