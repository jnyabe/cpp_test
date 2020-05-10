#ifndef _ABSTRACT_PRODUCT_B_
#define _ABSTRACT_PRODUCT_B_

#include <string>
#include "abstract_product_a.h"

class AbstractProductB {
public:
	virtual ~AbstractProductB() {}
	virtual std::string UsefulFunctionB() const = 0;
	virtual std::string AnotherUsefulFunctionB(const AbstractProductA & collaborator) const = 0;
};

#endif //  _ABSTRACT_PRODUCT_B_
