#ifndef CMDLOADERINTAKETOGGLE_H
#define CMDLOADERINTAKETOGGLE_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdLoaderIntakeToggle: public CommandBase {
private:
	Command *c;
public:
	CmdLoaderIntakeToggle();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
