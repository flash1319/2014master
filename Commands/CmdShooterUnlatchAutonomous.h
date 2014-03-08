#ifndef CMDSHOOTERUNLATCHAUTONOMOUS_H
#define CMDSHOOTERUNLATCHAUTONOMOUS_H

#include "../CommandBase.h"

/** 
 * @author Flash 1319
 */
class CmdShooterUnlatchAutonomous: public CommandBase {
public:
	CmdShooterUnlatchAutonomous();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
