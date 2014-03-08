#ifndef CMDLOADERUNJAMTOGGLE_H
#define CMDLOADERUNJAMTOGGLE_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdLoaderUnjamToggle: public CommandBase {
private:
	Command *c;
public:
	CmdLoaderUnjamToggle();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
