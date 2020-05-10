#ifndef _CONCRETE_FACTORY_1_H_
#define _CONCRETE_FACTORY_1_H_

#include "abstract_factory.h"
#include "concrete_product_a_1.h"
#include "concrete_product_b_1.h"

class ConcreteFactory1: public AbstractFactory
{
public:
	AbstractProductA* CreateProductA() const override {
		return new ConcreteProductA1();
	}
	AbstractProductB* CreateProductB() const override {
		return new ConcreteProductB1();
	}
};

#endif // _CONCRETE_FACTORY_1_H_
