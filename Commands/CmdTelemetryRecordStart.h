#ifndef CMDTELEMETRYRECORDSTART_H
#define CMDTELEMETRYRECORDSTART_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Joshua Dunster
 */
class CmdTelemetryRecordStart: public CommandBase {
public:
	CmdTelemetryRecordStart();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
