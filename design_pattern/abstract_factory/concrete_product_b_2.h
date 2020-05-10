#ifndef _CONCRETE_PRODUCT_B_2_
#define _CONCRETE_PRODUCT_B_2_

#include "abstract_product_b.h"

class ConcreteProductB2: public AbstractProductB
{
public:
	ConcreteProductB2() {}
	virtual ~ConcreteProductB2() {}
	std::string UsefulFunctionB() const override {
		return "The result of the product B2.";
	}

	std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const override {
		const std::string result = collaborator.UsefulFunctionA();
		return "The result of the product B2 collaborating with (" + result + ")";
	}
};

#endif //  _CONCRETE_PRODUCT_B_2_
