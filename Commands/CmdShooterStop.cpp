#include "CmdShooterStop.h"

CmdShooterStop::CmdShooterStop() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooter);
}

// Called just before this Command runs the first time
void CmdShooterStop::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterStop::Execute() {
	shooter->RunCatapult(0.);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterStop::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdShooterStop::End() {
	shooter->SetShooterOverridden(false);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterStop::Interrupted() {
}
