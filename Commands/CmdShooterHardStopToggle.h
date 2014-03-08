#ifndef CMDSHOOTERHARDSTOPTOGGLE_H
#define CMDSHOOTERHARDSTOPTOGGLE_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdShooterHardStopToggle: public CommandBase {
private:
	Command *c;
public:
	CmdShooterHardStopToggle();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
