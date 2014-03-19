#include "CmdKinectCheckAuto.h"
#include "../Robotmap.h"

CmdKinectCheckAuto::CmdKinectCheckAuto() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdKinectCheckAuto::Initialize() {
	oi->AutonomousHotGoal(false);
	m_endPacketNumber = DriverStation::GetInstance()->GetPacketNumber() + (int)(50.0 * LOOK_FOR_KINECT_TIME);
}

// Called repeatedly when this Command is scheduled to run
void CmdKinectCheckAuto::Execute() {
	if(oi->KinectGoalHot())
	{
		oi->AutonomousHotGoal(true);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool CmdKinectCheckAuto::IsFinished() {
	return oi->AutonomousHotGoal() || m_endPacketNumber >= DriverStation::GetInstance()->GetPacketNumber();
}

// Called once after isFinished returns true
void CmdKinectCheckAuto::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdKinectCheckAuto::Interrupted() {
}
