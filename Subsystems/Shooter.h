#ifndef SHOOTER_H
#define SHOOTER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 * @author Flash1319
 */
class Shooter: public Subsystem {
private:
	Victor *m_shooterMotor;
//	Solenoid *m_solLatch;
	DoubleSolenoid *m_solEngage, *m_solHardStop;
	DigitalInput *m_retractedSwitch, *m_latchSwitch, *m_gearBoxSwitch, *m_ballInSwitch, *m_lineBallIn;
	AnalogChannel *m_rangeFinder;
	Relay *m_cameraLED, *m_bling, *m_tempRelayLatch;
	
	bool m_shooterOverridden;
public:
	Shooter();
	void InitDefaultCommand();
	
	bool MotorRunning();			//Returns true if the motors are running else false if stopped
	bool Latched();					//Returns true if the solenoid for the latch is set to engaged else false
	bool MotorEngaged();			//Returns true if the gear box solenoid is set to be engaged else false
	bool HardStopEngaged();			//Returns true if the hard stop is engaged else false
	bool FullyRetracted();			//Returns true if the arm is retracted enough to latch else false
	bool LatchedSwitch();			//Returns true if the catapult is latched as told by the switch else false
	bool GearSwitchEngaged();		//Returns true if the gear box is engaged as told by the limit switch else false
	bool BallInside();				//Returns true if a ball is in the shooter, else false
	bool LineBallIn();				//Returns true if the line follower detects a ball in the ring, else false
	bool ShooterOverridden();		//Returns true if the shooter was overrided on this shooting cycle, else false
	float GetDistance();			//Returns the distance from an object in front of the robot
	bool CameraLit();				//Returns true if the Camera LED Ring is on, else false
	
	void RunCatapult(float speed);	//Sets the retraction motors to the speed passed in
	void LatchSolenoid(bool latch);	//Extends latch if passed true else retracts
	void SetClutch(bool clutch);	//Engages the gear box if true else disengages
	void SetHardStop(bool engage);	//Extends the hard stop if true else retracts
	void SetShooterOverridden(bool override);	//Sets the overridden variable to the value passed in
	void SetCameraLED(bool lit);	//Turns on the LED ring around the camera if lit is true, else turns it off
	void UpdateBling();				//Updates the bling periodically in Teleop and Autonomous
};

#endif
