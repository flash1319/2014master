#ifndef CMDFUNNELSUNDEPLOY_H
#define CMDFUNNELSUNDEPLOY_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdFunnelsUndeploy: public CommandBase {
public:
	CmdFunnelsUndeploy();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
