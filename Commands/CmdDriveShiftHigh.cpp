#include "CmdDriveShiftHigh.h"

CmdDriveShiftHigh::CmdDriveShiftHigh() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(drive);
}

// Called just before this Command runs the first time
void CmdDriveShiftHigh::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdDriveShiftHigh::Execute() {
	drive->Gear(Drive::high);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdDriveShiftHigh::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdDriveShiftHigh::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdDriveShiftHigh::Interrupted() {
}
