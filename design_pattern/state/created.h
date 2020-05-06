#ifndef _CREATED_H_
#define _CREATED_H_

#include "state.h"

class Created: public State {
public:
	Created();
	virtual ~Created();
	virtual State* Process(void) override;
	virtual int Cancel(void) override;
	virtual int GetProgress(void) override;
};

#endif // _CREATED_H_
