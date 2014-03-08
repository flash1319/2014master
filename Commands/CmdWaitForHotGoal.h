#ifndef CMDWAITFORHOTGOAL_H
#define CMDWAITFORHOTGOAL_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdWaitForHotGoal: public CommandBase {
private:
	UINT32 m_endPacketNumber;
	float m_waitTime;
public:
	CmdWaitForHotGoal();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
