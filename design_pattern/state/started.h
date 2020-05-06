#ifndef _STARTED_H_
#define _STARTED_H_

#include "state.h"

class Started: public State {
public:
	Started();
	virtual ~Started();
	virtual State* Process(void) override;
	virtual int Cancel(void) override;
	virtual int GetProgress(void) override;
};

#endif // _STARTED_H_
