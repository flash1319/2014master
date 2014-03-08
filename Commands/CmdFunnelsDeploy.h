#ifndef CMDFUNNELSDEPLOY_H
#define CMDFUNNELSDEPLOY_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdFunnelsDeploy: public CommandBase {
public:
	CmdFunnelsDeploy();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
