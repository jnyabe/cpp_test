#ifndef _STATE_H_
#define _STATE_H_

#include <string>
#include "state_context.h"

class State
{
protected:
	static std::string toLower(const std::string& str);
	static std::string toUpper(const std::string& str);
public:
	State() {}
	virtual ~State() {}
	virtual void writeName(StateContext &stateContext, const std::string& name) = 0;
};

#endif // _STATE_H_
