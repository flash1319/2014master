#include "CmdLoaderExtensionToggle.h"
#include "CmdLoaderExtend.h"
#include "CmdLoaderRetract.h"
#include "CmdFunnelsUndeploy.h"
#include "../Robotmap.h"

CmdLoaderExtensionToggle::CmdLoaderExtensionToggle() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdLoaderExtensionToggle::Initialize() {
	m_endPacketNumber = DriverStation::GetInstance()->GetPacketNumber();
	c = NULL;
	if(loader->IntakeExtended() == true) {
//		if(funnels->FunnelsDeployed())
//		{
//			Command *cFunnels;
//			cFunnels = new CmdFunnelsUndeploy();
//			cFunnels->Start();
//			 m_endPacketNumber += (int)(50.0 * LOADER_FUNNELS_DEPLOYMENT_WAIT_TIME);
//		}
		c = new CmdLoaderRetract();
	}
	else {
		c = new CmdLoaderExtend();
	}
}

// Called repeatedly when this Command is scheduled to run
void CmdLoaderExtensionToggle::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool CmdLoaderExtensionToggle::IsFinished() {
	return DriverStation::GetInstance()->GetPacketNumber() >= m_endPacketNumber;
}

// Called once after isFinished returns true
void CmdLoaderExtensionToggle::End() {
	c->Start();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdLoaderExtensionToggle::Interrupted() {
	
}
