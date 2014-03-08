#ifndef CMDWAITFORUNLATCH_H
#define CMDWAITFORUNLATCH_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdWaitForUnlatch: public CommandBase {
public:
	CmdWaitForUnlatch();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
