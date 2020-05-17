#ifndef _CONCRETE_PRODUCT_2_H_
#define _CONCRETE_PRODUCT_2_H_

#include <string>
#include "product.h"

class ConcreteProduct2: public Product
{
public:
	std::string Operation() const override {
		return "{Result of the ConcreteProduct2}";
	}
};

#endif // _CONCRETE_PRODUCT_2_H_
