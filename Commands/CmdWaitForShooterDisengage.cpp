#include "CmdWaitForShooterDisengage.h"
#include "../Robotmap.h"

CmdWaitForShooterDisengage::CmdWaitForShooterDisengage() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdWaitForShooterDisengage::Initialize() {
	m_timeOutPacketNumber = DriverStation::GetInstance()->GetPacketNumber() + (int)(50.0 * SHOOTER_DISENGAGE_TIMEOUT);
}

// Called repeatedly when this Command is scheduled to run
void CmdWaitForShooterDisengage::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool CmdWaitForShooterDisengage::IsFinished() {
	return !shooter->GearSwitchEngaged() || DriverStation::GetInstance()->GetPacketNumber() >= m_timeOutPacketNumber;
}

// Called once after isFinished returns true
void CmdWaitForShooterDisengage::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdWaitForShooterDisengage::Interrupted() {
}
