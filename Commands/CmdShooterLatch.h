#ifndef CMDSHOOTERLATCH_H
#define CMDSHOOTERLATCH_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdShooterLatch: public CommandBase {
public:
	CmdShooterLatch();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
