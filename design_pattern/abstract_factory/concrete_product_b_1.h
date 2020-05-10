#ifndef _CONCRETE_PRODUCT_B_1_
#define _CONCRETE_PRODUCT_B_1_

#include "abstract_product_b.h"

class ConcreteProductB1: public AbstractProductB
{
public:
	ConcreteProductB1() {}
	virtual ~ConcreteProductB1() {}
	std::string UsefulFunctionB() const override {
		return "The result of the product B1.";
	}

	std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const override {
		const std::string result = collaborator.UsefulFunctionA();
		return "The result of the product B1 collaborating with (" + result + ")";
	}
};

#endif //  _CONCRETE_PRODUCT_B_1_
