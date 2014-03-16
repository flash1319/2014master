#include "Shooter.h"
#include "../Robotmap.h"
#include "../Utilities.h"

Shooter::Shooter() : Subsystem("Shooter") {
	m_shooterMotor = new Victor(PWM_SHOOTER_PULLBACK);
//	m_solLatch = new Solenoid(SOL_SHOOTER_LATCH_MODULE, SOL_SHOOTER_LATCH);
	m_solEngage = new DoubleSolenoid(SOL_SHOOTER_ENGAGE_MODULE, SOL_SHOOTER_ENGAGE_A, SOL_SHOOTER_ENGAGE_B);
	m_solHardStop = new DoubleSolenoid(SOL_HARD_STOP_MODULE, SOL_HARD_STOP_A, SOL_HARD_STOP_B);
	m_retractedSwitch = new DigitalInput(GPIO_SHOOTER_RETRACTED_LIMIT);
	m_latchSwitch = new DigitalInput(GPIO_LATCHED_SWITCH);
	m_gearBoxSwitch = new DigitalInput(GPIO_SHOOTER_GEAR_ENGAGED);
	m_ballInSwitch = new DigitalInput(GPIO_BALL_IN_SWITCH);
	m_lineBallIn = new DigitalInput(GPIO_LINE_BALL_IN);
	m_rangeFinder = new AnalogChannel(ANALOG_RANGE_FINDER);
	m_cameraLED = new Relay(RELAY_CAMERA_LED);
	m_bling = new Relay(RELAY_BLING);
	
	m_tempRelayLatch = new Relay(RELAY_TEMP_LATCH);
	
	m_shooterOverridden = false;
	
	SetHardStop(true);
	
	m_shooterMotor->SetSafetyEnabled(SAFETY_ENABLED);
}
    
void Shooter::InitDefaultCommand() {
	
}

bool Shooter::MotorRunning() {
	return !InTolerance(m_shooterMotor->Get(), 0., MOTOR_STOPPED_TOLERANCE);
}

bool Shooter::Latched() {
//	return !m_solLatch->Get();
	return m_tempRelayLatch->Get() == Relay::kReverse;
}

bool Shooter::MotorEngaged() {
	return m_solEngage->Get() == DoubleSolenoid::kForward;
}

bool Shooter::HardStopEngaged() {
	return m_solHardStop->Get() == DoubleSolenoid::kReverse;
}

bool Shooter::FullyRetracted() {
	return !m_retractedSwitch->Get(); 
}

bool Shooter::LatchedSwitch() {
	return m_latchSwitch->Get();
}

bool Shooter::GearSwitchEngaged() {
	return m_gearBoxSwitch->Get();
}

bool Shooter::BallInside() {
	return m_ballInSwitch->Get();
}

bool Shooter::LineBallIn() {
	return m_lineBallIn->Get();
}

bool Shooter::ShooterOverridden() {
	return m_shooterOverridden;
}

float Shooter::GetDistance() {
	return (float)((int)(m_rangeFinder->GetAverageVoltage() / RANGE_FINDER_VOLTS_PER_FOOT * 10.0 + 0.5)) / 10.0;
}

bool Shooter::CameraLit() {
	return m_cameraLED->Get() == Relay::kForward;
}

void Shooter::RunCatapult(float speed) {
	m_shooterMotor->Set(-speed);
}

void Shooter::LatchSolenoid(bool latch) {
//	m_solLatch->Set(!latch);
	m_tempRelayLatch->Set(latch ? Relay::kReverse : Relay::kForward);
}

void Shooter::SetClutch(bool clutch) {
	m_solEngage->Set(clutch ? DoubleSolenoid::kForward : DoubleSolenoid::kReverse);
}

void Shooter::SetHardStop(bool engage) {
	m_solHardStop->Set(engage ? DoubleSolenoid::kReverse : DoubleSolenoid::kForward);
}

void Shooter::SetShooterOverridden(bool override) {
	m_shooterOverridden = override;
}

void Shooter::SetCameraLED(bool lit) {
	m_cameraLED->Set(lit ? Relay::kForward : Relay::kReverse);
}

void Shooter::UpdateBling(){
	if(HardStopEngaged() || DriverStation::GetInstance()->GetPacketNumber() % 12 >= 6) {
		m_bling->Set(Relay::kForward);
	}
	else {
		m_bling->Set(Relay::kReverse);
	}
}
