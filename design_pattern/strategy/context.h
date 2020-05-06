#ifndef _CONTEXT_H_
#define _CONTEXT_H_

#include <string>
#include <memory>

class Strategy;

class Context
{
private:
	std::shared_ptr<Strategy> m_strategy;
public:
	Context();
	Context(Strategy* strategy): m_strategy(strategy) {}
	virtual ~Context();
	void execute(void);
};

typedef std::shared_ptr<Context> ContextPtr;
#endif // _CONTEXT_H_
