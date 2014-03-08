#include "CmdDriveToggleFront.h"

CmdDriveToggleFront::CmdDriveToggleFront() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdDriveToggleFront::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdDriveToggleFront::Execute() {
	if(drive->LoaderFront()) {
		drive->SetFront(false);
	}
	else {
		drive->SetFront(true);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool CmdDriveToggleFront::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdDriveToggleFront::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdDriveToggleFront::Interrupted() {
}
