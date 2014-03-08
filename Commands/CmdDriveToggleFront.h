#ifndef CMDDRIVETOGGLEFRONT_H
#define CMDDRIVETOGGLEFRONT_H

#include "../CommandBase.h"

/**
 * @author Old Gregg
 */
class CmdDriveToggleFront: public CommandBase {
public:
	CmdDriveToggleFront();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
