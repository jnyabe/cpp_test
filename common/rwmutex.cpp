#include <assert.h>
#include "rwmutex.h"

using namespace common;

RwMutex::RwMutex(const char* name, Option option)
{
  int32_t ret = 0;
  
#ifdef USE_PTHREAD
  pthread_rwlockattr_t attr;
  ret = pthread_rwlockattr_init(&attr);
  assert(ret==0);
  
  ret = pthread_rwlock_init(&m_mutex, &attr);
  assert(ret==0);
#if 0
  if(option & Option_Recursvie)
  {
	  ret = pthread_rwlockattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE);
      assert(ret==0);
  }
#endif  
  ret = pthread_rwlockattr_destroy(&attr);
  assert(ret==0);
#else
#error
#endif
  
}

RwMutex::~RwMutex()
{
  int32_t ret = 0;
#ifdef USE_PTHREAD
  ret = pthread_rwlock_destroy(&m_mutex);
  assert(ret==0);
#else
#error
#endif  
}

int32_t RwMutex::RdLock(void)
{
  int32_t ret = 0;
#ifdef USE_PTHREAD
  ret = pthread_rwlock_rdlock(&m_mutex);
#else
#error
#endif  
  return ret;
}

int32_t RwMutex::WrLock(void)
{
  int32_t ret = 0;
#ifdef USE_PTHREAD
  ret = pthread_rwlock_rdlock(&m_mutex);
#else
#error
#endif  
  return ret;
}


int32_t RwMutex::TryRdLock(void)
{
  int32_t ret = 0;
#ifdef USE_PTHREAD
  ret = pthread_rwlock_tryrdlock(&m_mutex);
#else
#error
#endif  
  return ret;  
}

int32_t RwMutex::TryWrLock(void)
{
  int32_t ret = 0;
#ifdef USE_PTHREAD
  ret = pthread_rwlock_trywrlock(&m_mutex);
#else
#error
#endif  
  return ret;  
}

int32_t RwMutex::Unlock(void)
{
    int32_t ret = 0;
#ifdef USE_PTHREAD
    ret = pthread_rwlock_unlock(&m_mutex);
    assert(ret==0);
#else
#error
#endif  
    return ret;
}




