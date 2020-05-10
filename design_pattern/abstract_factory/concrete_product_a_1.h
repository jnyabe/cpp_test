#ifndef _CONCRETE_PRODUCT_A_1_
#define _CONCRETE_PRODUCT_A_1_

#include "abstract_product_a.h"

class ConcreteProductA1 : public AbstractProductA {
public:
	ConcreteProductA1() {}
	virtual ~ConcreteProductA1() {}
	std::string UsefulFunctionA() const override {
		return "The result of the product A1.";
	}
};

#endif // _CONCRETE_PRODUCT_A_1_
