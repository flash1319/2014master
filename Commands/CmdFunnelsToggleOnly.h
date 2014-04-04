#ifndef CMDFUNNELSTOGGLEONLY_H
#define CMDFUNNELSTOGGLEONLY_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdFunnelsToggleOnly: public CommandBase {
private:
	Command *c;
public:
	CmdFunnelsToggleOnly();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
