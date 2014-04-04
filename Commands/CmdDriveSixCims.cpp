#include "CmdDriveSixCims.h"

CmdDriveSixCims::CmdDriveSixCims() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdDriveSixCims::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdDriveSixCims::Execute() {
	drive->SixCimDrive(true);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdDriveSixCims::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdDriveSixCims::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdDriveSixCims::Interrupted() {
}
