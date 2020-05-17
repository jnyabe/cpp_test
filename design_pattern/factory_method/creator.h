#ifndef _CREATOR_H_
#define _CREATOR_H_

#include <string>
#include "product.h"

class Creator {
public:
	virtual ~Creator(){}
	virtual Product* FactoryMethod() const = 0;
	std::string SomeOperation() const {
	Product* product = this->FactoryMethod();
	std::string result = "Creator: The same creator's code has just worked with " + product->Operation();
	delete product;
	return result;
}

};

#endif // _CREATOR_H_
