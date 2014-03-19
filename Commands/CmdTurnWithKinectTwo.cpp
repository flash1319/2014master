#include "CmdTurnWithKinectTwo.h"
#include "CmdDriveProgrammed.h"
#include "../Robotmap.h"

CmdTurnWithKinectTwo::CmdTurnWithKinectTwo() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdTurnWithKinectTwo::Initialize() {
	m_endPacketNumber = DriverStation::GetInstance()->GetPacketNumber() + (int)(50.0 * AUTONOMOUS_TURN_TIME);
	if(oi->AutonomousHotGoal()) {
		c = new CmdDriveProgrammed(AUTONOMOUS_TURN_TWO_SHORT_SPEED, AUTONOMOUS_TURN_TWO_LONG_SPEED, AUTONOMOUS_TURN_TWO_TIME);
	}
	else {
		c = new CmdDriveProgrammed(AUTONOMOUS_TURN_TWO_LONG_SPEED, AUTONOMOUS_TURN_TWO_SHORT_SPEED, AUTONOMOUS_TURN_TWO_TIME);
	}
	
	c->Start();
}

// Called repeatedly when this Command is scheduled to run
void CmdTurnWithKinectTwo::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool CmdTurnWithKinectTwo::IsFinished() {
	return DriverStation::GetInstance()->GetPacketNumber() >= m_endPacketNumber;
}

// Called once after isFinished returns true
void CmdTurnWithKinectTwo::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdTurnWithKinectTwo::Interrupted() {
}
