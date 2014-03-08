#ifndef CMDLOADERLOADINGEXTENSIONTOGGLE_H
#define CMDLOADERLOADINGEXTENSIONTOGGLE_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdLoaderLoadingExtensionToggle: public CommandBase {
private:
	UINT32 m_endPacketNumber;
	UINT32 m_runPacketNumber;
	Command *c;
public:
	CmdLoaderLoadingExtensionToggle();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
