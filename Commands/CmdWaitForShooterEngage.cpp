#include "CmdWaitForShooterEngage.h"

CmdWaitForShooterEngage::CmdWaitForShooterEngage() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdWaitForShooterEngage::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdWaitForShooterEngage::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool CmdWaitForShooterEngage::IsFinished() {
	return shooter->GearSwitchEngaged();
}

// Called once after isFinished returns true
void CmdWaitForShooterEngage::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdWaitForShooterEngage::Interrupted() {
}
