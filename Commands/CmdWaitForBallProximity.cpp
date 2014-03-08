#include "CmdWaitForBallProximity.h"

CmdWaitForBallProximity::CmdWaitForBallProximity() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdWaitForBallProximity::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdWaitForBallProximity::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool CmdWaitForBallProximity::IsFinished() {
	return loader->BallProximity();
}

// Called once after isFinished returns true
void CmdWaitForBallProximity::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdWaitForBallProximity::Interrupted() {
}
