#ifndef _CONCRETE_STRATEGY_B_H_
#define _CONCRETE_STRATEGY_B_H_

#include "strategy.h"

class ConcreteStrategyB : public Strategy
{
public:
	ConcreteStrategyB() {}
	virtual ~ConcreteStrategyB() {}
	virtual void execute(void) override;
};
#endif // _CONCRETE_STRATEGY_B_H_
