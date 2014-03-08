#include "CmdDriveWithJoystickArcade.h"

CmdDriveWithJoystickArcade::CmdDriveWithJoystickArcade() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(drive);
}

// Called just before this Command runs the first time
void CmdDriveWithJoystickArcade::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdDriveWithJoystickArcade::Execute() {
	ReadJoystick();
	drive->JoystickArcadeDrive(m_speed, m_rotate);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdDriveWithJoystickArcade::IsFinished() {
	return drive->Mode() != Drive::arcade;
}

// Called once after isFinished returns true
void CmdDriveWithJoystickArcade::End() {
	drive->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdDriveWithJoystickArcade::Interrupted() {
	drive->Stop();
}

void CmdDriveWithJoystickArcade::ReadJoystick() {
	m_speed = oi->driveY();
	m_rotate = oi->driveX();
}
