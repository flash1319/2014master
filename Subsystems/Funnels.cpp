#include "Funnels.h"
#include "../Robotmap.h"

Funnels::Funnels() : Subsystem("Funnels") {
//	m_solFunnels = new DoubleSolenoid(SOL_FUNNEL_DEPLOY_MODULE, SOL_FUNNEL_DEPLOY_A, SOL_FUNNEL_DEPLOY_B);
	
	m_tempRelayFunnelsA = new Relay(RELAY_TEMP_SIDE_FUNNELS_A);
	m_tempRelayFunnelsB = new Relay(RELAY_TEMP_SIDE_FUNNELS_B);
	
	DeployFunnels(false);
}
    
void Funnels::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

bool Funnels::FunnelsDeployed() {
//	return m_solFunnels->Get() == DoubleSolenoid::kReverse;
	
	return m_tempRelayFunnelsA->Get() == Relay::kReverse && m_tempRelayFunnelsB->Get() == Relay::kForward;
}
	
void Funnels::DeployFunnels(bool deploy) {
//	m_solFunnels->Set(deploy ? DoubleSolenoid::kReverse : DoubleSolenoid::kForward);

	m_tempRelayFunnelsA->Set(deploy ? Relay::kReverse : Relay::kForward);
	m_tempRelayFunnelsB->Set(deploy ? Relay::kForward : Relay::kReverse);
}
