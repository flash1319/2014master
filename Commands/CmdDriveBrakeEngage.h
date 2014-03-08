#ifndef CMDDRIVEBRAKEENGAGE_H
#define CMDDRIVEBRAKEENGAGE_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdDriveBrakeEngage: public CommandBase {
public:
	CmdDriveBrakeEngage();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
