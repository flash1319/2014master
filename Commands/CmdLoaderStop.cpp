#include "CmdLoaderStop.h"

CmdLoaderStop::CmdLoaderStop() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(loader);
}

// Called just before this Command runs the first time
void CmdLoaderStop::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdLoaderStop::Execute() {
	loader->RunIntake(0.);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdLoaderStop::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdLoaderStop::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdLoaderStop::Interrupted() {
}
