#ifndef _CONTEXT_H_
#define _CONTEXT_H_

#include "state.h"
#include "created.h"

class Context
{
private:
	State *m_state;
	
public:
	Context();
	virtual ~Context();
	void TransitionTo(State* state);
	void Run(void);
};

#endif // _CONTEXT_H_
