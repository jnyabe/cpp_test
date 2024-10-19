#ifndef __COMMON_RWMUTEX_H_DEFINED__
#define __COMMON_RWMUTEX_H_DEFINED__

#include <stdint.h>
#include "config.h"

namespace common
{

	class RwMutex
	{
	private:

#ifdef USE_PTHREAD
		pthread_rwlock_t m_mutex;
#endif /* USE_PTHREAD */

	public:

		enum Option 
			{
				Option_None      = 0,
				Option_Recursvie = (1<<0),
			};

		/// @brief Default Consturctor
		RwMutex(const char* name, Option option = Option_None);

		/// @brief Destructor
		virtual ~RwMutex();
  
		int32_t RdLock(void);
		int32_t WrLock(void);

		int32_t TryRdLock(void);
		int32_t TryWrLock(void);
  
  
		int32_t Unlock(void);
		int32_t WrUnlock(void);
  
	};

}

#endif /* __COMMON_RWMUTEX_H_DEFINED__ */
