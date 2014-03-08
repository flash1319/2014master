#include "CmdWaitForLatch.h"
#include "../Robotmap.h"

CmdWaitForLatch::CmdWaitForLatch() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdWaitForLatch::Initialize() {
	m_endPacketNumber = DriverStation::GetInstance()->GetPacketNumber() + (int)(50.0 * SHOOTER_WAIT_FOR_LATCH);
}

// Called repeatedly when this Command is scheduled to run
void CmdWaitForLatch::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool CmdWaitForLatch::IsFinished() {
	return shooter->LatchedSwitch() && DriverStation::GetInstance()->GetPacketNumber() >= m_endPacketNumber;
}

// Called once after isFinished returns true
void CmdWaitForLatch::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdWaitForLatch::Interrupted() {
}
