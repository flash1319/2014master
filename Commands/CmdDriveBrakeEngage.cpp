#include "CmdDriveBrakeEngage.h"

CmdDriveBrakeEngage::CmdDriveBrakeEngage() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(drive);
}

// Called just before this Command runs the first time
void CmdDriveBrakeEngage::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdDriveBrakeEngage::Execute() {
	drive->Brake(true);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdDriveBrakeEngage::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdDriveBrakeEngage::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdDriveBrakeEngage::Interrupted() {
}
