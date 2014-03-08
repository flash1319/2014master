#include "CmdWaitForHotGoal.h"
#include "../Robotmap.h"

CmdWaitForHotGoal::CmdWaitForHotGoal() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdWaitForHotGoal::Initialize() {
	m_endPacketNumber = DriverStation::GetInstance()->GetPacketNumber() + (int)(AUTONOMOUS_WAIT_AFTER_DEPLOYMENT * 50.); 
}

// Called repeatedly when this Command is scheduled to run
void CmdWaitForHotGoal::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool CmdWaitForHotGoal::IsFinished() {
	return vision->hotGoal() || DriverStation::GetInstance()->GetPacketNumber() >= m_endPacketNumber;
}

// Called once after isFinished returns true
void CmdWaitForHotGoal::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdWaitForHotGoal::Interrupted() {
}
