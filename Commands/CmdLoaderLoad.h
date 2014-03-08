#ifndef CMDLOADERLOAD_H
#define CMDLOADERLOAD_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdLoaderLoad: public CommandBase {
public:
	CmdLoaderLoad();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
