#ifndef CMDSHOOTERPULLBACK_H
#define CMDSHOOTERPULLBACK_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdShooterPullBack: public CommandBase {
private:
	UINT32 m_timeOutPacketNumber;
	UINT32 m_endPacketNumber;
	UINT32 m_slowPacketNumber;
	bool m_sensorDetected;
public:
	CmdShooterPullBack();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
