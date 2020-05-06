#ifndef _STRATEGY_H_
#define _STRATEGY_H_

#include <string>
#include "context.h"

class Strategy
{
public:
	Strategy() {}
	virtual ~Strategy() {}
	virtual void execute(void) = 0;
};

#endif // _STRATEGY_H_
