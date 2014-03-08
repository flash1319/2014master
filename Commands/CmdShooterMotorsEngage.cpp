#include "CmdShooterMotorsEngage.h"

CmdShooterMotorsEngage::CmdShooterMotorsEngage() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooter);
}

// Called just before this Command runs the first time
void CmdShooterMotorsEngage::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterMotorsEngage::Execute() {
	shooter->SetClutch(true);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterMotorsEngage::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdShooterMotorsEngage::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterMotorsEngage::Interrupted() {
}
