#ifndef CMDSHOOTERSHOOT_H
#define CMDSHOOTERSHOOT_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdShooterShoot: public CommandBase {
private:
	CommandGroup *cg;
public:
	CmdShooterShoot();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
