#ifndef _FATAL_ERROR_H_
#define _FATAL_ERROR_H_

#include "state.h"

class FatalError: public State {
public:
	FatalError();
	virtual ~FatalError();
	virtual State* Process(void) override;
	virtual int Cancel(void) override;
	virtual int GetProgress(void) override;
};

#endif // _FATAL_ERROR_H_
