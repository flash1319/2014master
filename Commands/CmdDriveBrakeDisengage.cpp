#include "CmdDriveBrakeDisengage.h"

CmdDriveBrakeDisengage::CmdDriveBrakeDisengage() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(drive);
}

// Called just before this Command runs the first time
void CmdDriveBrakeDisengage::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdDriveBrakeDisengage::Execute() {
	drive->Brake(false);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdDriveBrakeDisengage::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdDriveBrakeDisengage::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdDriveBrakeDisengage::Interrupted() {
}
