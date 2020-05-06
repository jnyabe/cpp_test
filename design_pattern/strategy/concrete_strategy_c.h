#ifndef _CONCRETE_STRATEGY_C_H_
#define _CONCRETE_STRATEGY_C_H_

#include "strategy.h"

class ConcreteStrategyC : public Strategy
{
public:
	ConcreteStrategyC() {}
	virtual ~ConcreteStrategyC() {}
	virtual void execute(void) override;
};
#endif // _CONCRETE_STRATEGY_C_H_
