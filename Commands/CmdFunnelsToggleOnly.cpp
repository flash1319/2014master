#include "CmdFunnelsToggleOnly.h"
#include "CmdFunnelsDeploy.h"
#include "CmdFunnelsUndeploy.h"
#include "CmdLoaderExtend.h"
#include "../Robotmap.h"

CmdFunnelsToggleOnly::CmdFunnelsToggleOnly() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdFunnelsToggleOnly::Initialize() {
	c = NULL;
}

// Called repeatedly when this Command is scheduled to run
void CmdFunnelsToggleOnly::Execute() {
	if(funnels->FunnelsDeployed() == true) {
		c = new CmdFunnelsUndeploy();
	}
	else {
		c = new CmdFunnelsDeploy();
	}
	
	c->Start();
}

// Make this return true when this Command no longer needs to run execute()
bool CmdFunnelsToggleOnly::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdFunnelsToggleOnly::End() {
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdFunnelsToggleOnly::Interrupted() {
}
