#include "CmdDriveBrakeToggle.h"
#include "CmdDriveBrakeEngage.h"
#include "CmdDriveBrakeDisengage.h"

CmdDriveBrakeToggle::CmdDriveBrakeToggle() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdDriveBrakeToggle::Initialize() {
	c = NULL;
}

// Called repeatedly when this Command is scheduled to run
void CmdDriveBrakeToggle::Execute() {
	if(drive->BrakeDeployed()) {
		c = new CmdDriveBrakeDisengage();
	}
	else {
		c = new CmdDriveBrakeEngage();
	}
	c->Start();
}

// Make this return true when this Command no longer needs to run execute()
bool CmdDriveBrakeToggle::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdDriveBrakeToggle::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdDriveBrakeToggle::Interrupted() {
}
