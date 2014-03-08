#ifndef CMDLOADERLOADINGEXTEND_H
#define CMDLOADERLOADINGEXTEND_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdLoaderLoadingExtend: public CommandBase {
private:
	UINT32 m_retractPacketNumber;
	UINT32 m_endPacketNumber;
	bool m_sensorDetected;
public:
	CmdLoaderLoadingExtend();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
