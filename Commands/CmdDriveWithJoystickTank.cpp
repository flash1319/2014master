#include "CmdDriveWithJoystickTank.h"

CmdDriveWithJoystickTank::CmdDriveWithJoystickTank() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(drive);
}

// Called just before this Command runs the first time
void CmdDriveWithJoystickTank::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdDriveWithJoystickTank::Execute() {
	ReadJoysticks();
	drive->JoystickTankDrive(m_left, m_right);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdDriveWithJoystickTank::IsFinished() {
	return drive->Mode() != Drive::tank;
}

// Called once after isFinished returns true
void CmdDriveWithJoystickTank::End() {
	drive->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdDriveWithJoystickTank::Interrupted() {
	drive->Stop();
}

void CmdDriveWithJoystickTank::ReadJoysticks() {
	m_left = oi->driveY();
	m_right = oi->driveY2();
}
