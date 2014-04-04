#ifndef CMDDRIVESIXCIMSTOGGLE_H
#define CMDDRIVESIXCIMSTOGGLE_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdDriveSixCimsToggle: public CommandBase {
private:
	Command *c;
public:
	CmdDriveSixCimsToggle();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
