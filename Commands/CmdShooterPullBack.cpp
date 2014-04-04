#include "CmdShooterPullBack.h"
#include "../RobotMap.h"

CmdShooterPullBack::CmdShooterPullBack() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooter);
}

// Called just before this Command runs the first time
void CmdShooterPullBack::Initialize() {
	shooter->RunCatapult(SHOOTER_MOTOR_SPEED);
	int cp = DriverStation::GetInstance()->GetPacketNumber();
	m_endPacketNumber =  cp + 5;
	m_slowPacketNumber = cp + (int)(50.0 *
						(shooter->HardStopEngaged() ? SHOOTER_PULLBACK_LONG_BEFORE_SLOW
						 						    : SHOOTER_PULLBACK_SHORT_BEFORE_SLOW));
	m_timeOutPacketNumber = cp + (int)(50.0 * SHOOTER_PULLBACK_TIMEOUT);
	m_sensorDetected = false;
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterPullBack::Execute() {
	if(DriverStation::GetInstance()->GetPacketNumber() == m_slowPacketNumber)
	{
		shooter->RunCatapult(SHOOTER_PULLBACK_SLOW_SPEED);
	}	
	
	if(shooter->FullyRetracted() && !m_sensorDetected)
	{
		m_sensorDetected = true;
		m_endPacketNumber = DriverStation::GetInstance()->GetPacketNumber() + (int)(50.0 * SHOOTER_WAIT_BEFORE_STOP);
		shooter->LatchSolenoid(true);
	}
	
	if(!m_sensorDetected)
	{
		m_endPacketNumber = DriverStation::GetInstance()->GetPacketNumber() + 5;
	}
	
	if(shooter->ShooterOverridden()) {
		m_timeOutPacketNumber = DriverStation::GetInstance()->GetPacketNumber() + 5;
	}
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterPullBack::IsFinished() {
	return DriverStation::GetInstance()->GetPacketNumber() >= m_endPacketNumber || DriverStation::GetInstance()->GetPacketNumber() >= m_timeOutPacketNumber;
}

// Called once after isFinished returns true
void CmdShooterPullBack::End() {
	shooter->RunCatapult(0.);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterPullBack::Interrupted() {
	shooter->RunCatapult(0.);
}
