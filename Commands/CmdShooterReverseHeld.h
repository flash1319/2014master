#ifndef CMDSHOOTERREVERSEHELD_H
#define CMDSHOOTERREVERSEHELD_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Joshua Dunster
 */
class CmdShooterReverseHeld: public CommandBase {
public:
	CmdShooterReverseHeld();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
