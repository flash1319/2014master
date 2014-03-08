#ifndef CMDSHOOTERMOTORSDISENGAGE_H
#define CMDSHOOTERMOTORSDISENGAGE_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdShooterMotorsDisengage: public CommandBase {
public:
	CmdShooterMotorsDisengage();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
