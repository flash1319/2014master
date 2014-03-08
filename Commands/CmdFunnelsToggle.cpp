#include "CmdFunnelsToggle.h"
#include "CmdFunnelsDeploy.h"
#include "CmdFunnelsUndeploy.h"
#include "CmdLoaderExtend.h"
#include "../Robotmap.h"

CmdFunnelsToggle::CmdFunnelsToggle() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdFunnelsToggle::Initialize() {
	m_endPacketNumber = DriverStation::GetInstance()->GetPacketNumber();
	c = NULL;
	if(funnels->FunnelsDeployed() == true) {
		c = new CmdFunnelsUndeploy();
	}
	else {
		if(!loader->IntakeExtended())
		{
			Command *cIntake;
			cIntake = new CmdLoaderExtend();
			cIntake->Start();
			m_endPacketNumber += (int)(50.0 * LOADER_FUNNELS_DEPLOYMENT_WAIT_TIME);
		}
		c = new CmdFunnelsDeploy();
	}
}

// Called repeatedly when this Command is scheduled to run
void CmdFunnelsToggle::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool CmdFunnelsToggle::IsFinished() {
	return DriverStation::GetInstance()->GetPacketNumber() >= m_endPacketNumber;
}

// Called once after isFinished returns true
void CmdFunnelsToggle::End() {
	c->Start();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdFunnelsToggle::Interrupted() {
}
