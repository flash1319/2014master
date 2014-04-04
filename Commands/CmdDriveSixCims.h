#ifndef CMDDRIVESIXCIMS_H
#define CMDDRIVESIXCIMS_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdDriveSixCims: public CommandBase {
public:
	CmdDriveSixCims();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
