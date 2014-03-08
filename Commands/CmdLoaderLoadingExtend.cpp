#include "CmdLoaderLoadingExtend.h"
#include "../Robotmap.h"

CmdLoaderLoadingExtend::CmdLoaderLoadingExtend() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(loader);
}

// Called just before this Command runs the first time
void CmdLoaderLoadingExtend::Initialize() {
	loader->SetExtended(true);
	m_retractPacketNumber = DriverStation::GetInstance()->GetPacketNumber() + 5;
	m_endPacketNumber = DriverStation::GetInstance()->GetPacketNumber() + 5;
	m_sensorDetected = false;
}

// Called repeatedly when this Command is scheduled to run
void CmdLoaderLoadingExtend::Execute() {
	loader->RunIntake(LOADER_MOTOR_SPEED);
	if(loader->BallProximity() && !m_sensorDetected) {
		m_sensorDetected = true;
		m_retractPacketNumber = DriverStation::GetInstance()->GetPacketNumber() + (int)(50.0 * LOADER_PULL_BALL_TIME);
		m_endPacketNumber = DriverStation::GetInstance()->GetPacketNumber() + (int)(50.0 * LOADER_PULL_BALL_TIME * 2);
	}
	if(!m_sensorDetected) {
		m_retractPacketNumber = DriverStation::GetInstance()->GetPacketNumber() + 5;
		m_endPacketNumber = DriverStation::GetInstance()->GetPacketNumber() + 5;
	}
	if(DriverStation::GetInstance()->GetPacketNumber() == m_retractPacketNumber) {
		loader->SetExtended(false);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool CmdLoaderLoadingExtend::IsFinished() {
	return (m_sensorDetected && DriverStation::GetInstance()->GetPacketNumber() >= m_endPacketNumber) || !loader->IntakeRunning();
}

// Called once after isFinished returns true
void CmdLoaderLoadingExtend::End() {
	loader->RunIntake(0.);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdLoaderLoadingExtend::Interrupted() {
	loader->SetExtended(false);
	loader->RunIntake(0.);
}
