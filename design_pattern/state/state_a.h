#ifndef _STATE_A_H_
#define _STATE_A_H_

#include "state.h"
#include "state_context.h"

class StateA : public State
{
public:
	StateA() {}
	virtual ~StateA() {}
	virtual void writeName(StateContext &stateContext, const std::string &name) override;
};
#endif // _STATE_A_H_
