#ifndef _ABSTRACT_PRODUCT_A_
#define _ABSTRACT_PRODUCT_A_

#include <string>

class AbstractProductA {
public:
	AbstractProductA() {}
	virtual ~AbstractProductA() {}
	virtual std::string UsefulFunctionA() const = 0;
};

#endif //  _ABSTRACT_PRODUCT_A_
