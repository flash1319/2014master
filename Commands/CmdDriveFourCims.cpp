#include "CmdDriveFourCims.h"

CmdDriveFourCims::CmdDriveFourCims() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdDriveFourCims::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdDriveFourCims::Execute() {
	drive->SixCimDrive(false);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdDriveFourCims::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdDriveFourCims::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdDriveFourCims::Interrupted() {
}
