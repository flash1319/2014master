#include "CmdWaitAndDrive.h"
#include "CmdDriveProgrammed.h"
#include "../Robotmap.h"

CmdWaitAndDrive::CmdWaitAndDrive() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(drive);
}

// Called just before this Command runs the first time
void CmdWaitAndDrive::Initialize() {
	m_endPacketNumber = DriverStation::GetInstance()->GetPacketNumber() + (int)(50.0 * AUTONOMOUS_TIME_BEFORE_DRIVE);
	c = new CmdDriveProgrammed(AUTONOMOUS_SPEED, AUTONOMOUS_SPEED, AUTONOMOUS_DRIVE_TIME);
}

// Called repeatedly when this Command is scheduled to run
void CmdWaitAndDrive::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool CmdWaitAndDrive::IsFinished() {
	return DriverStation::GetInstance()->GetPacketNumber() >= m_endPacketNumber;
}

// Called once after isFinished returns true
void CmdWaitAndDrive::End() {
	c->Start();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdWaitAndDrive::Interrupted() {
}
