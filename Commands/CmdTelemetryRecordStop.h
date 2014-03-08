#ifndef CMDTELEMETRYRECORDSTOP_H
#define CMDTELEMETRYRECORDSTOP_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Joshua Dunster
 */
class CmdTelemetryRecordStop: public CommandBase {
public:
	CmdTelemetryRecordStop();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
