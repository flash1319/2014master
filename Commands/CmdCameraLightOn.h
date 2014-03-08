#ifndef CMDCAMERALIGHTON_H
#define CMDCAMERALIGHTON_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdCameraLightOn: public CommandBase {
public:
	CmdCameraLightOn();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
