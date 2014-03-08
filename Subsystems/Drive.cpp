#include "Drive.h"
#include "../Robotmap.h"
#include "../Commands/CmdDriveWithJoystickTank.h"
#include "../Commands/CmdDriveWithJoystickArcade.h"


Drive::Drive() : Subsystem("Drive") {
	m_leftOne = new Victor(PWM_LEFT_ONE);
	m_leftTwo = new Victor(PWM_LEFT_TWO);
	m_leftThree = new Victor(PWM_LEFT_THREE);
	m_rightOne = new Victor(PWM_RIGHT_ONE);
	m_rightTwo = new Victor(PWM_RIGHT_TWO);
	m_rightThree = new Victor(PWM_RIGHT_THREE);
	
	m_driveOne = new RobotDrive(m_leftOne, m_leftTwo, m_rightOne, m_rightTwo);
	m_driveTwo = new RobotDrive(m_leftThree, m_rightThree);
	
	m_solGear = new DoubleSolenoid(SOL_GEAR_SHIFT_MODULE, SOL_GEAR_SHIFT_A, SOL_GEAR_SHIFT_B);
	m_solBrake = new Solenoid(SOL_BRAKE_PAD_MODULE, SOL_BRAKE_PAD);
	
	m_leftEncoder = new Encoder(GPIO_LEFT_ENCODER_A, GPIO_LEFT_ENCODER_B, false);
	m_rightEncoder = new Encoder(GPIO_RIGHT_ENCODER_A, GPIO_RIGHT_ENCODER_B, false);
	
	m_leftEncoder->SetDistancePerPulse(DRV_DIST_PER_PULSE);
	m_rightEncoder->SetDistancePerPulse(DRV_DIST_PER_PULSE);
	
	m_leftEncoder->Start();
	m_rightEncoder->Start();
	
//	m_gyro = new Gyro(ANALOG_DRIVE_GYRO);
//	m_accelerometer = new ADXL345_I2C(DRIVE_ACCELEROMETER_MODULE);
	
	m_mode = tank;
	
	m_cmdTank = NULL;
	m_cmdArcade = NULL;
	
	Gear(high);
	
	m_loaderFront = false; 
  
	m_driveOne->SetSafetyEnabled(SAFETY_ENABLED);
	m_driveTwo->SetSafetyEnabled(SAFETY_ENABLED);
}
    
void Drive::InitDefaultCommand() {
	m_cmdTank = new CmdDriveWithJoystickTank();
	m_cmdArcade = new CmdDriveWithJoystickArcade();
	SetDefaultCommand(m_cmdTank);
}

float Drive::SpeedLeft() {
	return (float)(m_leftEncoder->GetRate());
}

float Drive::SpeedRight() {
	return (float)(m_rightEncoder->GetRate());
}

float Drive::DistanceLeft() {
	return (float)(m_leftEncoder->GetDistance());
}

float Drive::DistanceRight() {
	return (float)(m_rightEncoder->GetDistance());
}

bool Drive::BrakeDeployed() {
	return m_solBrake->Get();
}

bool Drive::LoaderFront() {
	return m_loaderFront;
}

//float Drive::GetHeading() {
//	return m_gyro->GetAngle();
//}
//
//float Drive::GetAccelX() {
//	return m_accelerometer->GetAcceleration(ADXL345_I2C::kAxis_X);
//}
//
//float Drive::GetAccelY() {
//	return m_accelerometer->GetAcceleration(ADXL345_I2C::kAxis_Y);
//}

Drive::e_gear Drive::Gear() {
	return m_gear;
}

Drive::e_mode Drive::Mode() {
	return m_mode;
}

void Drive::JoystickArcadeDrive(float speed, float rotate) {
	if(m_loaderFront) {
		m_driveOne->ArcadeDrive(speed, -rotate, false);
		m_driveTwo->ArcadeDrive(speed, -rotate, false);
	}
	else {
		m_driveOne->ArcadeDrive(-speed, -rotate, false);
		m_driveTwo->ArcadeDrive(-speed, -rotate, false);
	}
}

void Drive::JoystickTankDrive(float speedLeft, float speedRight) {
	if(m_loaderFront) {
		m_driveOne->TankDrive(speedLeft, speedRight, false);
		m_driveTwo->TankDrive(speedLeft, speedRight, false);
	}
	else {
		m_driveOne->TankDrive(-speedRight, -speedLeft, false);
		m_driveTwo->TankDrive(-speedRight, -speedLeft, false);
	}
}

void Drive::Brake(bool deploy) {
	if (deploy == true) {
		Stop();
	}
	m_solBrake->Set(deploy);
}

void Drive::SetFront(bool loaderFront) {
	m_loaderFront = loaderFront;
}

void Drive::Gear(Drive::e_gear gear) {
	if(gear == low) {
		m_solGear->Set(DoubleSolenoid::kReverse);
	}
	else {
		m_solGear->Set(DoubleSolenoid::kForward);
	}
	m_gear = gear;
}

void Drive::Mode(Drive::e_mode mode) {
	if(mode == tank) {
		SetDefaultCommand(m_cmdTank);
	}
	else {
		SetDefaultCommand(m_cmdArcade);
	}
	m_mode = mode;
}

void Drive::Stop() {
	m_driveOne->StopMotor();
	m_driveTwo->StopMotor();
}
