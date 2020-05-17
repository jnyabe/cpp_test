#ifndef _CONCRETE_CREATOR_1_H_
#define _CONCRETE_CREATOR_1_H_

#include <string>
#include "creator.h"
#include "concrete_product_1.h"

class ConcreteCreator1: public Creator {
public:
	virtual Product* FactoryMethod() const override {
		return new ConcreteProduct1();
	}
};

#endif // _CONCRETE_CREATOR_1_H_
