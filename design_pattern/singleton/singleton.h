#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include <iostream>

class Singleton
{
private:
	Singleton() { std::cout << "- constructor -" << std::endl; }
	~Singleton() { std::cout << "- destructor -" << std::endl; } 
public:
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;

	static Singleton& getInstance()
	{
		static Singleton instance;
		return instance;
	}

	const char* getString() const
	{
		return "Hello world!";
	}
	

};

#endif // _SINGLETON_H_
