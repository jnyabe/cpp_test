#include <assert.h>
#include <pthread.h>
#include "thread.h"
#include "error.h"

namespace common
{

	Thread::Thread()
		: m_is_canceld(false)
#ifdef USE_PTHREAD	  
		, m_thread(0)
#endif /* USE_PTHREAD */	  
	{
   
	}

	Thread::~Thread()
	{
   
	}


	bool Thread::IsCanceled(void)
	{
		return m_is_canceld;
	}

 
	int32_t Thread::Start(void)
	{
		int32_t ret = 0;

#ifdef USE_PTHREAD
		if(m_thread != 0)
		{
			return COMMON_ERROR_ALREADY_THREAD_RUNNING;
		}
  
		pthread_attr_t attr;

		ret = pthread_attr_init(&attr);
		assert(ret==0);

		ret = pthread_create(&m_thread, &attr, startRoutine, this);
		assert(ret==0);

		ret = pthread_attr_destroy(&attr);
		assert(ret==0);
#endif /* USE_PTHREAD */

		return ret;
	}

	void Thread::Cancel(void)
	{
		m_is_canceld = true;
	}

	int32_t Thread::Join(void)
	{
		int32_t ret = 0;

#ifdef USE_PTHREAD
		if(!m_thread)
		{
			return COMMON_ERROR_NO_THREAD_RUNNING;
		}
		
		void* value_ptr;
		ret = pthread_join(m_thread, &value_ptr);
#endif /* USE_PTHREAD */  
  
		return ret;
	}

	void* Thread::startRoutine(void* arg) 
	{
		assert(arg);
  
		if(arg)
		{
			static_cast<Thread*>(arg)->Run();
		}
  
#ifdef USE_PTHREAD
		pthread_exit(NULL);
#endif /* USE_PTHREAD */
  
		return NULL;
	}


} // namespace common

