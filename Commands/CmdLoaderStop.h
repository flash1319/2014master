#ifndef CMDLOADERSTOP_H
#define CMDLOADERSTOP_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdLoaderStop: public CommandBase {
public:
	CmdLoaderStop();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
