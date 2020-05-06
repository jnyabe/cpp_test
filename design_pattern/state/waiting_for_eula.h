#ifndef _WAITING_FOR_EULA_H_
#define _WAITING_FOR_EULA_H_

#include "state.h"

class WaitingForEula: public State {
public:
	WaitingForEula();
	virtual ~WaitingForEula();
	virtual State* Process(void) override;
	virtual int Cancel(void) override;
	virtual int GetProgress(void) override;
};

#endif // _WAITING_FOR_EULA_H_
