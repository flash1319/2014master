#ifndef CMDSHOOTERSTOP_H
#define CMDSHOOTERSTOP_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdShooterStop: public CommandBase {
public:
	CmdShooterStop();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
