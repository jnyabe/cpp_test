#ifndef _STATE_B_H_
#define _STATE_B_H_

#include "state.h"
#include "state_context.h"

class StateB : public State
{
private:
	int m_count;
public:
	StateB():m_count(0) {}
	virtual ~StateB() {}
	virtual void writeName(StateContext &stateContext, const std::string &name) override;
};
#endif // _STATE_B_H_
