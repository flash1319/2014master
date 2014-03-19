#ifndef OI_H
#define OI_H

#include "WPILib.h"
#include "oimap.h"

class OI {
private:
	Joystick *m_driverPad, *m_operatorPad;
	
	JoystickButton *m_shooterSafetyOverrideButton;
	
	KinectStick *m_leftArm, *m_rightArm;
	
	bool m_driveZLast, m_driveZCurrent, m_autoHotGoal;
	
#define BUTTON_SETUP(btn_name, pad, btn_code, action, cmd, arg) \
	JoystickButton *btn_name;
#include "buttons.h"
#undef BUTTON_SETUP
	
public:
	OI();
	
	float driveX();
	float driveY();
	float driveX2();
	float driveY2();
	float driveZ();
	bool driveZPressed();
	bool driveShooterSafeOverride();
	
	float operateX();
	float operateY();
	float operateX2();
	float operateY2();
	float operateZ();
	
	static float scaleAxis(float input);
	
	float KinectLeftY();
	float KinectRightY();
	bool KinectGoalHot();
	
	void AutonomousHotGoal(bool goalHot);
	bool AutonomousHotGoal();
};

#endif
