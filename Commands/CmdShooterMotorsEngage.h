#ifndef CMDSHOOTERMOTORSENGAGE_H
#define CMDSHOOTERMOTORSENGAGE_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdShooterMotorsEngage: public CommandBase {
public:
	CmdShooterMotorsEngage();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
