#ifndef CMDCAMERALIGHTOFF_H
#define CMDCAMERALIGHTOFF_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdCameraLightOff: public CommandBase {
public:
	CmdCameraLightOff();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
