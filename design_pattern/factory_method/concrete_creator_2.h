#ifndef _CONCRETE_CREATOR_2_H_
#define _CONCRETE_CREATOR_2_H_

#include <string>
#include "creator.h"
#include "concrete_product_2.h"

class ConcreteCreator2: public Creator {
public:
	virtual Product* FactoryMethod() const override {
		return new ConcreteProduct2();
	}
};

#endif // _CONCRETE_CREATOR_2_H_
