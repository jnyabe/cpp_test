#ifndef _IMAGE_WRITING_H_
#define _IMAGE_WRITING_H_

#include "state.h"

class ImageWriting: public State {
public:
	ImageWriting();
	virtual ~ImageWriting();
	virtual State* Process(void) override;
	virtual int Cancel(void) override;
	virtual int GetProgress(void) override;
};

#endif // _IMAGE_WRITING_H_
