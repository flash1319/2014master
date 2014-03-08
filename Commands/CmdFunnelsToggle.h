#ifndef CMDFUNNELSTOGGLE_H
#define CMDFUNNELSTOGGLE_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdFunnelsToggle: public CommandBase {
private:
	Command *c;
	UINT32 m_endPacketNumber;
public:
	CmdFunnelsToggle();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
