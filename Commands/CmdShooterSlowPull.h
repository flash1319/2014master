#ifndef CMDSHOOTERSLOWPULL_H
#define CMDSHOOTERSLOWPULL_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Joshua Dunster
 */
class CmdShooterSlowPull: public CommandBase {
public:
	CmdShooterSlowPull();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
