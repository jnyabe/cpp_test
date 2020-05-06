#ifndef _PRE_PROCESS_H_
#define _PRE_PROCESS_H_

#include "state.h"

class PreProcess: public State {
public:
	PreProcess();
	virtual ~PreProcess();
	virtual State* Process(void) override;
	virtual int Cancel(void) override;
	virtual int GetProgress(void) override;
};

#endif // _PRE_PROCESS_H_
