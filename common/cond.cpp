#include <assert.h>
#include "cond.h"

using namespace common;

Cond::Cond(Mutex* mutex, const char* name, Option option)
{
	pthread_condattr_t cond_attr;
	int ret = pthread_cond_init(&m_cond, cond_attr);
}

Cond::~Cond()
{
	
}
  
int32_t Cond::Wait(void)
{
	int32_t ret = 0;
	return ret;
}

int32_t Cond::TimedWait(uint32_t usec)
{
	int32_t ret = 0;
	return ret;
}
  
int32_t Cond::Notify(void)
{
	int32_t ret = 0;
	return ret;
}
  
int32_t Cond::NotifyAll(void)
{
	int32_t ret = 0;
	return ret;
}
  



