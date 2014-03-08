#ifndef CMDLOADEREXTENDANDWAIT_H
#define CMDLOADEREXTENDANDWAIT_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdLoaderExtendAndWait: public CommandBase {
private:
	UINT32 m_endPacketNumber;
public:
	CmdLoaderExtendAndWait();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
