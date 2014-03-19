#ifndef CMDTURNWITHKINECT_H
#define CMDTURNWITHKINECT_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdTurnWithKinect: public CommandBase {
private:
	UINT32 m_endPacketNumber;
	Command *c;
public:
	CmdTurnWithKinect();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
