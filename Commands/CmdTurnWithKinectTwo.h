#ifndef CMDTURNWITHKINECTTWO_H
#define CMDTURNWITHKINECTTWO_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdTurnWithKinectTwo: public CommandBase {
private:
	UINT32 m_endPacketNumber;
	Command *c;
public:
	CmdTurnWithKinectTwo();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
