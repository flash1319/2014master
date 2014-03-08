#ifndef CMDWAITFORSHOOTERDISENGAGE_H
#define CMDWAITFORSHOOTERDISENGAGE_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdWaitForShooterDisengage: public CommandBase {
private:
	UINT32 m_timeOutPacketNumber;
public:
	CmdWaitForShooterDisengage();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
