#ifndef _CONCRETE_STRATEGY_A_H_
#define _CONCRETE_STRATEGY_A_H_

#include "strategy.h"

class ConcreteStrategyA : public Strategy
{
public:
	ConcreteStrategyA() {}
	virtual ~ConcreteStrategyA() {}
	virtual void execute(void) override;
};
#endif // _CONCRETE_STRATEGY_A_H_
