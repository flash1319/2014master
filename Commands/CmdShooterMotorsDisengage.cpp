#include "CmdShooterMotorsDisengage.h"

CmdShooterMotorsDisengage::CmdShooterMotorsDisengage() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooter);
}

// Called just before this Command runs the first time
void CmdShooterMotorsDisengage::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterMotorsDisengage::Execute() {
	shooter->SetClutch(false);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterMotorsDisengage::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdShooterMotorsDisengage::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterMotorsDisengage::Interrupted() {
}
