#ifndef CMDKINECTCHECKAUTO_H
#define CMDKINECTCHECKAUTO_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdKinectCheckAuto: public CommandBase {
private:
	UINT32 m_endPacketNumber;
public:
	CmdKinectCheckAuto();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
