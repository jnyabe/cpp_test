#include "started.h"
#include "downloading.h"
#include "debug.h"

Started::Started()
{
	TRACE();
}

Started::~Started()
{
	TRACE();
}

State* Started::Process(void)
{
	return new Downloading();
}

int Started::Cancel(void)
{
	return State::Cancel();
}

int Started::GetProgress(void)
{
	return 0;
}
