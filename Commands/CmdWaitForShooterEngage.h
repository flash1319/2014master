#ifndef CMDWAITFORSHOOTERENGAGE_H
#define CMDWAITFORSHOOTERENGAGE_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdWaitForShooterEngage: public CommandBase {
public:
	CmdWaitForShooterEngage();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
