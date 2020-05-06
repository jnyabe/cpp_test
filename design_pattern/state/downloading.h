#ifndef _DOWNLOADING_H_
#define _DOWNLOADING_H_

#include "state.h"

class Downloading: public State {
public:
	Downloading();
	virtual ~Downloading();
	virtual State* Process(void) override;
	virtual int Cancel(void) override;
	virtual int GetProgress(void) override;
};

#endif // _DOWNLOADING_H_
