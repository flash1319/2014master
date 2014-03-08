#include "CmdShooterHardStopRetract.h"

CmdShooterHardStopRetract::CmdShooterHardStopRetract() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooter);
}

// Called just before this Command runs the first time
void CmdShooterHardStopRetract::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterHardStopRetract::Execute() {
	shooter->SetHardStop(false);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterHardStopRetract::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdShooterHardStopRetract::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterHardStopRetract::Interrupted() {
}
