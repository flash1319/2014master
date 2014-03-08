#include "CmdShooterReverse.h"
#include "../Robotmap.h"

CmdShooterReverse::CmdShooterReverse() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooter);
}

// Called just before this Command runs the first time
void CmdShooterReverse::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterReverse::Execute() {
	shooter->RunCatapult(SHOOTER_MOTOR_REVERSE_SPEED);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterReverse::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdShooterReverse::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterReverse::Interrupted() {
	
}
