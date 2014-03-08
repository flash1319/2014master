#ifndef CMDWAITFORLATCH_H
#define CMDWAITFORLATCH_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdWaitForLatch: public CommandBase {
private:
	UINT32 m_endPacketNumber;
public:
	CmdWaitForLatch();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
