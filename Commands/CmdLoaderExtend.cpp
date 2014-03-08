#include "CmdLoaderExtend.h"
#include "../Robotmap.h"

CmdLoaderExtend::CmdLoaderExtend() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(loader);
}

// Called just before this Command runs the first time
void CmdLoaderExtend::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdLoaderExtend::Execute() {
	loader->SetExtended(true);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdLoaderExtend::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdLoaderExtend::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdLoaderExtend::Interrupted() {
	\
}
