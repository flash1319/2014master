#ifndef CMDSHOOTERUNLATCH_H
#define CMDSHOOTERUNLATCH_H

#include "../CommandBase.h"

/** 
 * @author Flash 1319
 */
class CmdShooterUnlatch: public CommandBase {
public:
	CmdShooterUnlatch();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
