#ifndef CMDWAITANDDRIVE_H
#define CMDWAITANDDRIVE_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdWaitAndDrive: public CommandBase {
private:
	UINT32 m_endPacketNumber;
	Command *c;
public:
	CmdWaitAndDrive();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
