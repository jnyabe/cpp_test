#ifndef _DEBUG_H_
#define _DEBUG_H_

#include <stdio.h>

#define DEBUG

#ifdef DEBUG
#define DBGPRT(...) { \
		fprintf(stderr, "[%s:%d]", __FUNCTION__, __LINE__); \
		fprintf(stderr, __VA_ARGS__); }
#define DBGERR(...) { \
		fprintf(stderr, "[%s:%d] ERROR: ", __FUNCTION__, __LINE__); \
		fprintf(stderr, __VA_ARGS__); }
#define TRACE() { fprintf(stderr, "[%s:%d] TRACE\n", __FUNCTION__, __LINE__);}
#else
#define DBGPRT(...)
#define DBGERR(...)
#define TRACE()
#endif // DEBUG

#endif // _DEBUG_H_
