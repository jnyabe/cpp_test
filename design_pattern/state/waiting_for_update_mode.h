#ifndef _WAITING_FOR_UDPATE_MODE_H_
#define _WAITING_FOR_UDPATE_MODE_H_

#include "state.h"

class WaitingForUpdateMode: public State {
public:
	WaitingForUpdateMode();
	virtual ~WaitingForUpdateMode();
	virtual State* Process(void) override;
	virtual int Cancel(void) override;
	virtual int GetProgress(void) override;
};

#endif // _WAITING_FOR_UDPATE_MODE_H_
