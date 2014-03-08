#ifndef CMDDRIVEAUTONOMOUS_H
#define CMDDRIVEAUTONOMOUS_H

#include "../CommandBase.h"

/**
 * @author Flash1319
 */
class CmdDriveAutonomous: public CommandBase {
private:
	float m_distance, m_leftStartDistance, m_rightStartDistance;
public:
	CmdDriveAutonomous(float distance);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
