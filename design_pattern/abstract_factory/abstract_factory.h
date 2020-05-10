#ifndef _ABSTRACT_FACTORY_H_
#define _ABSTRACT_FACTORY_H_

class AbstractProductA;
class AbstractProductB;

class AbstractFactory
{
public:
	virtual AbstractProductA* CreateProductA() const = 0;
	virtual AbstractProductB* CreateProductB() const = 0;
};
#endif // _ABSTRACT_FACTORY_H_
