#include "Loader.h"
#include "../Robotmap.h"
#include "../Utilities.h"

Loader::Loader() : Subsystem("Loader") {
	m_ballIntake = new Victor(PWM_BALL_PICKUP_WHEEL);
	m_solIntakeExtend = new DoubleSolenoid(SOL_BALL_PICKUP_DEPLOY_MODULE, SOL_BALL_PICKUP_DEPLOY_A, SOL_BALL_PICKUP_DEPLOY_B);
	m_ballProximitySwitch = new DigitalInput(GPIO_BALL_PROXIMITY_SWITCH);
	
	SetExtended(false);
	
	m_ballIntake->SetSafetyEnabled(SAFETY_ENABLED);
}
    
void Loader::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

bool Loader::IntakeRunning() {
	return !InTolerance(m_ballIntake->Get(), 0., MOTOR_STOPPED_TOLERANCE);
}

bool Loader::IntakeExtended() {
	return m_solIntakeExtend->Get() == DoubleSolenoid::kReverse;
}

bool Loader::BallProximity() {
	return m_ballProximitySwitch->Get();
}

void Loader::RunIntake(float speed) {
	m_ballIntake->Set(-speed);
}

void Loader::SetExtended(bool extend) {
	m_solIntakeExtend->Set(extend ? DoubleSolenoid::kReverse : DoubleSolenoid::kForward);
}
