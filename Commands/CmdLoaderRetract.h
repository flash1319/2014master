#ifndef CMDLOADERRETRACT_H
#define CMDLOADERRETRACT_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdLoaderRetract: public CommandBase {
public:
	CmdLoaderRetract();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
