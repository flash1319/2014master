#ifndef CMDDRIVEBRAKEDISENGAGE_H
#define CMDDRIVEBRAKEDISENGAGE_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdDriveBrakeDisengage: public CommandBase {
public:
	CmdDriveBrakeDisengage();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
