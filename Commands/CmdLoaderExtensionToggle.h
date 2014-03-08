#ifndef CMDLOADEREXTENSIONTOGGLE_H
#define CMDLOADEREXTENSIONTOGGLE_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdLoaderExtensionToggle: public CommandBase {
private:
	Command *c;
	UINT32 m_endPacketNumber;
public:
	CmdLoaderExtensionToggle();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
