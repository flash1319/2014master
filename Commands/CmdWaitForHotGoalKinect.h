#ifndef CMDWAITFORHOTGOALKINECT_H
#define CMDWAITFORHOTGOALKINECT_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdWaitForHotGoalKinect: public CommandBase {
private:
	UINT32 m_endPacketNumber;
	float m_waitTime;
public:
	CmdWaitForHotGoalKinect();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
