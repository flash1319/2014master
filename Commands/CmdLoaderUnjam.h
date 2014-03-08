#ifndef CMDLOADERUNJAM_H
#define CMDLOADERUNJAM_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdLoaderUnjam: public CommandBase {
public:
	CmdLoaderUnjam();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
