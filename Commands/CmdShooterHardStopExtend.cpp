#include "CmdShooterHardStopExtend.h"

CmdShooterHardStopExtend::CmdShooterHardStopExtend() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooter);
}

// Called just before this Command runs the first time
void CmdShooterHardStopExtend::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterHardStopExtend::Execute() {
	shooter->SetHardStop(true);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterHardStopExtend::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdShooterHardStopExtend::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterHardStopExtend::Interrupted() {
}
