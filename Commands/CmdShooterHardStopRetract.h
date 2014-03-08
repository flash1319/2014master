#ifndef CMDSHOOTERHARDSTOPRETRACT_H
#define CMDSHOOTERHARDSTOPRETRACT_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdShooterHardStopRetract: public CommandBase {
public:
	CmdShooterHardStopRetract();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
