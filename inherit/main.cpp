#include <iostream>

class A {
public:
	A() {}
	virtual ~A() {}
	virtual int method1() { return 0;}
	int method2() { return 0;}
};

class B: public A {
public:
	B() {}
	virtual ~B() {}
	virtual int method1() { return 1;}
	int method2() { return 1;}
};

int main(int argc, const char* argv[])
{
	A* b = new B();
	printf("method1: %d\n", b->method1());
	printf("method2: %d\n", b->method2());

	return 0;
}
