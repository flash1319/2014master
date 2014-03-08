#include "CmdLoaderExtendAndWait.h"
#include "../Robotmap.h"

CmdLoaderExtendAndWait::CmdLoaderExtendAndWait() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(loader);
}

// Called just before this Command runs the first time
void CmdLoaderExtendAndWait::Initialize() {
	m_endPacketNumber = DriverStation::GetInstance()->GetPacketNumber();
	if(!loader->IntakeExtended())
	{
		loader->SetExtended(true);
		m_endPacketNumber += (int)(50.0 * LOADER_EXTENSION_TIME);
	}
}

// Called repeatedly when this Command is scheduled to run
void CmdLoaderExtendAndWait::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool CmdLoaderExtendAndWait::IsFinished() {
	return DriverStation::GetInstance()->GetPacketNumber() >= m_endPacketNumber;
}

// Called once after isFinished returns true
void CmdLoaderExtendAndWait::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdLoaderExtendAndWait::Interrupted() {
}
