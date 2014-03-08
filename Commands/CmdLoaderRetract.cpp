#include "CmdLoaderRetract.h"

CmdLoaderRetract::CmdLoaderRetract() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(loader);
}

// Called just before this Command runs the first time
void CmdLoaderRetract::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdLoaderRetract::Execute() {
	loader->SetExtended(false);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdLoaderRetract::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdLoaderRetract::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdLoaderRetract::Interrupted() {
}
