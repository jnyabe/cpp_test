#ifndef _PRODUCT_H_
#define _PRODUCT_H_

#include <string>

class Product {
public:
	virtual ~Product() {}
	virtual std::string Operation() const = 0;
};

#endif // _PRODUCT_H_
