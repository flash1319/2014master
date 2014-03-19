#include "OI.h"
#include "Math.h"
#include "Utilities.h"
#include "Robotmap.h"
#define BUTTON_HEADERS
#include "buttons.h"
#undef BUTTON_HEADERS

OI::OI() {
	m_driverPad = new Joystick(PAD_DRIVER);
	m_operatorPad = new Joystick(PAD_OPERATOR);
	
	m_leftArm = new KinectStick(1);
	m_rightArm = new KinectStick(2);
	
	m_driveZLast = false;
	m_driveZCurrent = false;
	
	m_autoHotGoal = false;
	
#define BUTTON_SETUP(btn_name, pad, btn_code, action, cmd, arg) \
	btn_name = new JoystickButton(pad, btn_code); \
	btn_name->action(new cmd(arg));
#include "buttons.h"
#undef BUTTON_SETUP
	
	m_shooterSafetyOverrideButton = new JoystickButton(m_driverPad, SHOOTING_SAFE_OVERRIDE);
}

float OI::driveX() {
	return scaleAxis(m_driverPad->GetRawAxis(DRV_AXIS_X)) * DRIVE_MOTORS_SCALE;
}

float OI::driveY() {
	return -scaleAxis(m_driverPad->GetRawAxis(DRV_AXIS_Y)) * DRIVE_MOTORS_SCALE;
}

float OI::driveX2() {
	return scaleAxis(m_driverPad->GetRawAxis(DRV_AXIS_X2)) * DRIVE_MOTORS_SCALE;
}

float OI::driveY2() {
	return -scaleAxis(m_driverPad->GetRawAxis(DRV_AXIS_Y2)) * DRIVE_MOTORS_SCALE;
}

float OI::driveZ() {
	return scaleAxis(m_driverPad->GetRawAxis(DRV_AXIS_Z));
}

bool OI::driveZPressed() {
	m_driveZLast = m_driveZCurrent;
	m_driveZCurrent = m_driverPad->GetRawAxis(DRV_AXIS_Z) > .25;
	return m_driveZCurrent && !m_driveZLast;
}

bool OI::driveShooterSafeOverride() {
	return m_shooterSafetyOverrideButton->Get();
}

float OI::operateX() {
	return scaleAxis(m_operatorPad->GetRawAxis(OPR_AXIS_X));
}

float OI::operateY() {
	return -scaleAxis(m_operatorPad->GetRawAxis(OPR_AXIS_Y));
}

float OI::operateX2() {
	return scaleAxis(m_operatorPad->GetRawAxis(OPR_AXIS_X2));
}

float OI::operateY2() {
	return -scaleAxis(m_operatorPad->GetRawAxis(OPR_AXIS_Y2));
}

float OI::operateZ() {
	return scaleAxis(m_operatorPad->GetRawAxis(OPR_AXIS_Z));
}

float OI::scaleAxis(float input) {
	const float k = 21;
	const float y = 22;
	
	float filteredInput = fabs(input);
	
	if(filteredInput <= AXIS_FILTER) {
		filteredInput = 0.;
	}
	
	return (pow(y, filteredInput) - 1) / k * Sign(input);
}

float OI::KinectLeftY() {
	return -m_leftArm->GetY();
}

float OI::KinectRightY() {
	return -m_rightArm->GetY();
}

bool OI::KinectGoalHot() {
	return (KinectLeftY() >= KINECT_HOT_GOAL_THRESHOLD) && (KinectRightY() >= KINECT_HOT_GOAL_THRESHOLD);
}

void OI::AutonomousHotGoal(bool goalHot) {
	m_autoHotGoal = goalHot;
}

bool OI::AutonomousHotGoal() {
	return m_autoHotGoal;
}
