#ifndef CMDWAITFORBALLPROXIMITY_H
#define CMDWAITFORBALLPROXIMITY_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdWaitForBallProximity: public CommandBase {
public:
	CmdWaitForBallProximity();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
