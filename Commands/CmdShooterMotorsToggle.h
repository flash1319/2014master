#ifndef CMDSHOOTERMOTORSTOGGLE_H
#define CMDSHOOTERMOTORSTOGGLE_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdShooterMotorsToggle: public CommandBase {
private:
	Command *c;
public:
	CmdShooterMotorsToggle();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
