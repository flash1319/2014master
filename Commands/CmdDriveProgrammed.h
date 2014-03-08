#ifndef CMDDRIVEPROGRAMMED_H
#define CMDDRIVEPROGRAMMED_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdDriveProgrammed: public CommandBase {
private:
	float m_leftSpeed, m_rightSpeed, m_time;
	UINT32 m_endPacketNumber;
public:
	CmdDriveProgrammed(float leftSpeed, float rightSpeed, float time);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
