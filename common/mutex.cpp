#include <assert.h>
#include "mutex.h"

using namespace common;

Mutex::Mutex(const char* name, Option option)
{
	int32_t ret = 0;

#ifdef USE_PTHREAD
	pthread_mutexattr_t attr;
	ret = COMMON_ERROR_ERRNO(pthread_mutexattr_init(&attr));
	if(ret < 0)
	{
		ERRPRT("");
	}
	
	ret = COMMON_ERROR_ERRNO(pthread_mutex_init(&m_mutex, &attr));
	assert(ret==0);
  
	if(option & Option_Recursvie)
    {
		ret = COMMON_ERROR_ERRNO(pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE));
		assert(ret==0);
    }
  
	ret = COMMON_ERROR_ERRNO(pthread_mutexattr_destroy(&attr));
	assert(ret==0);
#else
#error
#endif
	return ret;
}

Mutex::~Mutex()
{
	int32_t ret = 0;
#ifdef USE_PTHREAD
	Unlock();
	ret = COMMON_ERROR_ERRNO(pthread_mutex_destroy(&m_mutex));
	assert(ret==0);
#else
#error
#endif
}

int32_t Mutex::Lock(void)
{
	int32_t ret = 0;
#ifdef USE_PTHREAD
	ret = COMMON_ERROR_ERRNO(pthread_mutex_lock(&m_mutex));
	assert(ret==0);
#else
#error
#endif  
	return ret;
}


int32_t Mutex::TryLock(void)
{
	int32_t ret = 0;
#ifdef USE_PTHREAD
	ret = COMMON_ERROR_ERRNO(pthread_mutex_trylock(&m_mutex));
	assert(ret==0);
#else
#error
#endif  
	return ret;  
}

int32_t Mutex::Unlock(void)
{
    int32_t ret = 0;
#ifdef USE_PTHREAD
    ret = COMMON_ERROR_ERRNO(pthread_mutex_unlock(&m_mutex));
    assert(ret==0);
#else
#error
#endif  
    return ret;
}



