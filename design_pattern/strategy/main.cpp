#include <stdio.h>
#include "context.h"
#include "concrete_strategy_a.h"
#include "concrete_strategy_b.h"
#include "concrete_strategy_c.h"

int main(int argc, const char* argv[])
{

	Context* a = new Context(new ConcreteStrategyA());
	a->execute();
	
	Context* b = new Context(new ConcreteStrategyB());
	b->execute();

	Context* c = new Context(new ConcreteStrategyC());
	c->execute();

	delete a;
	delete b;
	delete c;
	
	return 0;
}
