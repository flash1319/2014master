#ifndef CMDWAIT_H
#define CMDWAIT_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdWait: public CommandBase {
private:
	UINT32 m_endPacketNumber;
	float m_waitTime;
public:
	CmdWait(float waitTime);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
