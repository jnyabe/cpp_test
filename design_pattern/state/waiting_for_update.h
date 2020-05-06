#ifndef _WAITING_FOR_UPDATE_H_
#define _WAITING_FOR_UPDATE_H_

#include "state.h"

class WaitingForUpdate: public State {
public:
	WaitingForUpdate();
	virtual ~WaitingForUpdate();
	virtual State* Process(void) override;
	virtual int Cancel(void) override;
	virtual int GetProgress(void) override;
};

#endif // _WAITING_FOR_UPDATE_H_
