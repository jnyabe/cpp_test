
#include "image_writing.h"
#include "pre_process.h"
#include "debug.h"

ImageWriting::ImageWriting()
{
	TRACE();
}
ImageWriting::~ImageWriting()
{
	TRACE();
}
State* ImageWriting::Process(void)
{
	return new PreProcess();
}

int ImageWriting::Cancel(void)
{
	return State::Cancel();
}

int ImageWriting::GetProgress(void)
{
	return 0;
}
