#include "downloading.h"
#include "image_writing.h"
#include "fatal_error.h"
#include "debug.h"

Downloading::Downloading()
{
	TRACE();
}
Downloading::~Downloading()
{
	TRACE();
}
State* Downloading::Process(void)
{
	// downloading ..
	return new ImageWriting();
}

int Downloading::Cancel(void)
{
	return State::Cancel();
}

int Downloading::GetProgress(void)
{
	return 0;
}
