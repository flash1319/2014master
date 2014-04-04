#ifndef CMDDRIVEFOURCIMS_H
#define CMDDRIVEFOURCIMS_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdDriveFourCims: public CommandBase {
public:
	CmdDriveFourCims();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
