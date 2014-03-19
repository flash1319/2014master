#include "CmdTurnWithKinect.h"
#include "CmdDriveProgrammed.h"
#include "../Robotmap.h"

CmdTurnWithKinect::CmdTurnWithKinect() {
	// Use requires() here to declare subsystem dependencies
}

// Called just before this Command runs the first time
void CmdTurnWithKinect::Initialize() {
	m_endPacketNumber = DriverStation::GetInstance()->GetPacketNumber() + (int)(50.0 * AUTONOMOUS_TURN_TIME);
	if(oi->AutonomousHotGoal()) {
		c = new CmdDriveProgrammed(AUTONOMOUS_TURN_SPEED, 0.0, AUTONOMOUS_TURN_TIME);
	}
	else {
		c = new CmdDriveProgrammed(0.0, AUTONOMOUS_TURN_SPEED, AUTONOMOUS_TURN_TIME);
	}
	
	c->Start();
}

// Called repeatedly when this Command is scheduled to run
void CmdTurnWithKinect::Execute() {
}

// Make this return true when this Command no longer needs to run execute()
bool CmdTurnWithKinect::IsFinished() {
	return DriverStation::GetInstance()->GetPacketNumber() >= m_endPacketNumber;
}

// Called once after isFinished returns true
void CmdTurnWithKinect::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdTurnWithKinect::Interrupted() {
}
