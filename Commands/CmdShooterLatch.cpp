#include "CmdShooterLatch.h"

CmdShooterLatch::CmdShooterLatch() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooter);
}

// Called just before this Command runs the first time
void CmdShooterLatch::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterLatch::Execute() {
	shooter->LatchSolenoid(true);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterLatch::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdShooterLatch::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterLatch::Interrupted() {
}
