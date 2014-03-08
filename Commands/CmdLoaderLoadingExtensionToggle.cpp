#include "CmdLoaderLoadingExtensionToggle.h"
#include "CmdLoaderLoadingExtend.h"
#include "CmdLoaderRetract.h"
#include "CmdFunnelsUndeploy.h"
#include "../Robotmap.h"

CmdLoaderLoadingExtensionToggle::CmdLoaderLoadingExtensionToggle() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdLoaderLoadingExtensionToggle::Initialize() {
	m_endPacketNumber = DriverStation::GetInstance()->GetPacketNumber();
	m_runPacketNumber = DriverStation::GetInstance()->GetPacketNumber();
	c = NULL;
	if(loader->IntakeExtended() == true) {
		if(funnels->FunnelsDeployed())
		{
			Command *cFunnels;
			cFunnels = new CmdFunnelsUndeploy();
			cFunnels->Start();
			m_runPacketNumber += (int)(50.0 * LOADER_FUNNELS_DEPLOYMENT_WAIT_TIME);
			m_endPacketNumber += (int)(50.0 * LOADER_FUNNELS_DEPLOYMENT_WAIT_TIME);
		}
		m_endPacketNumber += (int)(50.0 * LOADER_RUN_AFTER_RETRACT);
		c = new CmdLoaderRetract();
	}
	else {
		c = new CmdLoaderLoadingExtend();
	}
}

// Called repeatedly when this Command is scheduled to run
void CmdLoaderLoadingExtensionToggle::Execute() {
	if(DriverStation::GetInstance()->GetPacketNumber() == m_runPacketNumber) {
		c->Start();
	}
}

// Make this return true when this Command no longer needs to run execute()
bool CmdLoaderLoadingExtensionToggle::IsFinished() {
	return DriverStation::GetInstance()->GetPacketNumber() >= m_endPacketNumber;
}

// Called once after isFinished returns true
void CmdLoaderLoadingExtensionToggle::End() {
	loader->RunIntake(0.);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdLoaderLoadingExtensionToggle::Interrupted() {
	loader->RunIntake(0.);
}
