#ifndef CMDDRIVEBRAKETOGGLE_H
#define CMDDRIVEBRAKETOGGLE_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdDriveBrakeToggle: public CommandBase {
private:
	Command *c;
public:
	CmdDriveBrakeToggle();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
