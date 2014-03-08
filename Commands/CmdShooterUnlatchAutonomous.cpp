#include "CmdShooterUnlatchAutonomous.h"

CmdShooterUnlatchAutonomous::CmdShooterUnlatchAutonomous() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooter);
}

// Called just before this Command runs the first time
void CmdShooterUnlatchAutonomous::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterUnlatchAutonomous::Execute() {
	if(shooter->LineBallIn()) {
		shooter->LatchSolenoid(false);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterUnlatchAutonomous::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdShooterUnlatchAutonomous::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterUnlatchAutonomous::Interrupted() {
}
