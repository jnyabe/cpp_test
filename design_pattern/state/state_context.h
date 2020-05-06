#ifndef _STATE_CONTEXT_H_
#define _STATE_CONTEXT_H_

#include <string>

class State;

class StateContext
{
private:
	State* m_state;
public:
	StateContext();
	virtual ~StateContext();
	void setState(State *newState);
	void writeName(const std::string& name);
};

#endif // _STATE_CONTEXT_H_
