#ifndef CMDSHOOTERHARDSTOPEXTEND_H
#define CMDSHOOTERHARDSTOPEXTEND_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdShooterHardStopExtend: public CommandBase {
public:
	CmdShooterHardStopExtend();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
