#include "CmdDriveSixCimsToggle.h"
#include "CmdDriveSixCims.h"
#include "CmdDriveFourCims.h"

CmdDriveSixCimsToggle::CmdDriveSixCimsToggle() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdDriveSixCimsToggle::Initialize() {
	c = NULL;
}

// Called repeatedly when this Command is scheduled to run
void CmdDriveSixCimsToggle::Execute() {
	if(drive->SixCimDrive()) {
		c = new CmdDriveFourCims();
	}
	else {
		c = new CmdDriveSixCims();
	}
	c->Start();
}

// Make this return true when this Command no longer needs to run execute()
bool CmdDriveSixCimsToggle::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdDriveSixCimsToggle::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdDriveSixCimsToggle::Interrupted() {
}
