#ifndef _STATE_H_
#define _STATE_H_

class Context;

class State {
protected:
	bool m_isCanceled;
	Context *m_contextPtr;
	
public:
	State(): m_isCanceled(false), m_contextPtr(0){} 
	virtual ~State() {}
	virtual State* Process(void) = 0;
	virtual int Cancel(void) { m_isCanceled = true; return 0;}
	virtual inline bool IsCanceled(void) const { return m_isCanceled;}
	virtual int GetProgress(void) = 0;
};

#endif // _STATE_H_
