#include "CmdFunnelsDeploy.h"

CmdFunnelsDeploy::CmdFunnelsDeploy() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(funnels);
}

// Called just before this Command runs the first time
void CmdFunnelsDeploy::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdFunnelsDeploy::Execute() {
	funnels->DeployFunnels(true);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdFunnelsDeploy::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdFunnelsDeploy::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdFunnelsDeploy::Interrupted() {
}
