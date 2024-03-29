#include "CmdDriveShiftLow.h"

CmdDriveShiftLow::CmdDriveShiftLow() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(drive);
}

// Called just before this Command runs the first time
void CmdDriveShiftLow::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdDriveShiftLow::Execute() {
	drive->Gear(Drive::low);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdDriveShiftLow::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdDriveShiftLow::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdDriveShiftLow::Interrupted() {
}
