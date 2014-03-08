#include "CmdShooterSlowPull.h"
#include "../Robotmap.h"

CmdShooterSlowPull::CmdShooterSlowPull() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooter);
}

// Called just before this Command runs the first time
void CmdShooterSlowPull::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterSlowPull::Execute() {
	shooter->RunCatapult(SHOOTER_MOTOR_DISENGAGE_SPEED);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterSlowPull::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdShooterSlowPull::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterSlowPull::Interrupted() {
}
