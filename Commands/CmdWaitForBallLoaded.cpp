#include "CmdWaitForBallLoaded.h"

CmdWaitForBallLoaded::CmdWaitForBallLoaded() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdWaitForBallLoaded::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdWaitForBallLoaded::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool CmdWaitForBallLoaded::IsFinished() {
	return shooter->LineBallIn();
}

// Called once after isFinished returns true
void CmdWaitForBallLoaded::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdWaitForBallLoaded::Interrupted() {
}
