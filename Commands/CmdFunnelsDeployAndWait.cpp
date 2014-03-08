#include "CmdFunnelsDeployAndWait.h"
#include "../Robotmap.h"

CmdFunnelsDeployAndWait::CmdFunnelsDeployAndWait() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(funnels);
}

// Called just before this Command runs the first time
void CmdFunnelsDeployAndWait::Initialize() {
	m_endPacketNumber = DriverStation::GetInstance()->GetPacketNumber();
	if(!funnels->FunnelsDeployed())
	{
		funnels->DeployFunnels(true);
		m_endPacketNumber += (int)(50.0 * LOADER_FUNNELS_DEPLOYMENT_WAIT_TIME);
	}
}

// Called repeatedly when this Command is scheduled to run
void CmdFunnelsDeployAndWait::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool CmdFunnelsDeployAndWait::IsFinished() {
	return DriverStation::GetInstance()->GetPacketNumber() >= m_endPacketNumber;
}

// Called once after isFinished returns true
void CmdFunnelsDeployAndWait::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdFunnelsDeployAndWait::Interrupted() {
}
