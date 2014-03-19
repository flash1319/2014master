#ifndef CMDSHOOTERSHOOTPASS_H
#define CMDSHOOTERSHOOTPASS_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdShooterShootPass: public CommandBase {
private:
	CommandGroup *cg;
public:
	CmdShooterShootPass();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
