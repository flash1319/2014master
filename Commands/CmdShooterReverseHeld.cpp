#include "CmdShooterReverseHeld.h"
#include "../Robotmap.h"

CmdShooterReverseHeld::CmdShooterReverseHeld() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooter);
}

// Called just before this Command runs the first time
void CmdShooterReverseHeld::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterReverseHeld::Execute() {
	shooter->RunCatapult(SHOOTER_MOTOR_REVERSE_SPEED);	
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterReverseHeld::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void CmdShooterReverseHeld::End() {
	shooter->RunCatapult(0.);	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterReverseHeld::Interrupted() {
	shooter->RunCatapult(0.);
}
