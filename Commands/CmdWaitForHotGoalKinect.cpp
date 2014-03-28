#include "CmdWaitForHotGoalKinect.h"
#include "../Robotmap.h"

CmdWaitForHotGoalKinect::CmdWaitForHotGoalKinect() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdWaitForHotGoalKinect::Initialize() {
	m_endPacketNumber = DriverStation::GetInstance()->GetPacketNumber() + (int)((AUTONOMOUS_WAIT_AFTER_DEPLOYMENT + 0.5) * 50.); 
}

// Called repeatedly when this Command is scheduled to run
void CmdWaitForHotGoalKinect::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool CmdWaitForHotGoalKinect::IsFinished() {
	return oi->KinectGoalHot() || DriverStation::GetInstance()->GetPacketNumber() >= m_endPacketNumber;
}

// Called once after isFinished returns true
void CmdWaitForHotGoalKinect::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdWaitForHotGoalKinect::Interrupted() {
}
