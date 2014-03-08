#ifndef CMDSHOOTERREVERSE_H
#define CMDSHOOTERREVERSE_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdShooterReverse: public CommandBase {
public:
	CmdShooterReverse();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
