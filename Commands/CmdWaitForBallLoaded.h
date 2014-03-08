#ifndef CMDWAITFORBALLLOADED_H
#define CMDWAITFORBALLLOADED_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdWaitForBallLoaded: public CommandBase {
public:
	CmdWaitForBallLoaded();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
