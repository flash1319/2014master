#ifndef CMDTURNWITHKINECTBACK_H
#define CMDTURNWITHKINECTBACK_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdTurnWithKinectBack: public CommandBase {
private:
	Command *c;
	UINT32 m_endPacketNumber;
public:
	CmdTurnWithKinectBack();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
