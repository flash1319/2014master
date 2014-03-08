#include "CmdDriveProgrammed.h"

CmdDriveProgrammed::CmdDriveProgrammed(float leftSpeed, float rightSpeed, float time) {
	// Use requires() here to declare subsystem dependencies
	Requires(drive);
	m_leftSpeed = leftSpeed;
	m_rightSpeed = rightSpeed;
	m_time = time;
}

// Called just before this Command runs the first time
void CmdDriveProgrammed::Initialize() {
	m_endPacketNumber = DriverStation::GetInstance()->GetPacketNumber() + (int)(m_time * 50.);
}

// Called repeatedly when this Command is scheduled to run
void CmdDriveProgrammed::Execute() {
	drive->JoystickTankDrive(m_leftSpeed, m_rightSpeed);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdDriveProgrammed::IsFinished() {
	return DriverStation::GetInstance()->GetPacketNumber() >= m_endPacketNumber;
}

// Called once after isFinished returns true
void CmdDriveProgrammed::End() {
	drive->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdDriveProgrammed::Interrupted() {
	drive->Stop();
}
