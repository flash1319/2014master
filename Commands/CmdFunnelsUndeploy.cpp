#include "CmdFunnelsUndeploy.h"

CmdFunnelsUndeploy::CmdFunnelsUndeploy() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(funnels);
}

// Called just before this Command runs the first time
void CmdFunnelsUndeploy::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdFunnelsUndeploy::Execute() {
	funnels->DeployFunnels(false);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdFunnelsUndeploy::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdFunnelsUndeploy::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdFunnelsUndeploy::Interrupted() {
}
