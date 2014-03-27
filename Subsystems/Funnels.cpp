#include "Funnels.h"
#include "../Robotmap.h"

Funnels::Funnels() : Subsystem("Funnels") {
	m_solFunnels = new DoubleSolenoid(SOL_FUNNEL_DEPLOY_MODULE, SOL_FUNNEL_DEPLOY_A, SOL_FUNNEL_DEPLOY_B);
	
	DeployFunnels(false);
}
    
void Funnels::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

bool Funnels::FunnelsDeployed() {
	return m_solFunnels->Get() == DoubleSolenoid::kReverse;
}
	
void Funnels::DeployFunnels(bool deploy) {
	m_solFunnels->Set(deploy ? DoubleSolenoid::kReverse : DoubleSolenoid::kForward);
}
