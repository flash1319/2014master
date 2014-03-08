#ifndef CMDLOADEREXTEND_H
#define CMDLOADEREXTEND_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdLoaderExtend: public CommandBase {
public:
	CmdLoaderExtend();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
