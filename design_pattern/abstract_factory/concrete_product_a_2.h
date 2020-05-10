#ifndef _CONCRETE_PRODUCT_A_2_
#define _CONCRETE_PRODUCT_A_2_

#include "abstract_product_a.h"

class ConcreteProductA2 : public AbstractProductA {
public:
	ConcreteProductA2() {}
	virtual ~ConcreteProductA2() {}
	std::string UsefulFunctionA() const override {
		return "The result of the product A2.";
	}
};

#endif // _CONCRETE_PRODUCT_A_2_
