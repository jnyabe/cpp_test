#ifndef _CONCRETE_PRODUCT_1_H_
#define _CONCRETE_PRODUCT_1_H_

#include <string>
#include "product.h"

class ConcreteProduct1: public Product
{
public:
	std::string Operation() const override {
		return "{Result of the ConcreteProduct1}";
	}
};

#endif // _CONCRETE_PRODUCT_1_H_
