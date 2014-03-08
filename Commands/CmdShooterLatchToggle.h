#ifndef CMDSHOOTERLATCHTOGGLE_H
#define CMDSHOOTERLATCHTOGGLE_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdShooterLatchToggle: public CommandBase {
private:
	Command *c;
public:
	CmdShooterLatchToggle();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
