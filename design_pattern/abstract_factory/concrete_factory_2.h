#ifndef _CONCRETE_FACTORY_2_H_
#define _CONCRETE_FACTORY_2_H_

#include "abstract_factory.h"
#include "concrete_product_a_2.h"
#include "concrete_product_b_2.h"

class ConcreteFactory2: public AbstractFactory
{
public:
	AbstractProductA* CreateProductA() const override {
		return new ConcreteProductA2();
	}
	AbstractProductB* CreateProductB() const override {
		return new ConcreteProductB2();
	}
};

#endif // _CONCRETE_FACTORY_2_H_
