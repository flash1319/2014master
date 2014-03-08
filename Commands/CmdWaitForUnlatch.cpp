#include "CmdWaitForUnlatch.h"

CmdWaitForUnlatch::CmdWaitForUnlatch() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdWaitForUnlatch::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdWaitForUnlatch::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool CmdWaitForUnlatch::IsFinished() {
	return !shooter->LatchedSwitch();
}

// Called once after isFinished returns true
void CmdWaitForUnlatch::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdWaitForUnlatch::Interrupted() {
}
