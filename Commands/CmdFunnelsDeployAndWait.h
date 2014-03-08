#ifndef CMDFUNNELSDEPLOYANDWAIT_H
#define CMDFUNNELSDEPLOYANDWAIT_H

#include "../CommandBase.h"

/**
 * @author Joshua Dunster
 */
class CmdFunnelsDeployAndWait: public CommandBase {
private:
	UINT32 m_endPacketNumber;
public:
	CmdFunnelsDeployAndWait();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
