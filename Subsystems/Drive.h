#ifndef DRIVE_H
#define DRIVE_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 * @author Flash1319
 */
class Drive: public Subsystem {
public:
	enum e_gear { low = 0, high = 1 };
	enum e_mode { arcade = 0, tank = 1 };
	
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor *m_leftOne, *m_leftTwo, *m_leftThree, *m_rightOne, *m_rightTwo, *m_rightThree;
	RobotDrive *m_driveOne, *m_driveTwo;
	DoubleSolenoid *m_solGear;
	Solenoid *m_solBrake;
	Encoder *m_leftEncoder, *m_rightEncoder;
//	Gyro *m_gyro;
//	ADXL345_I2C *m_accelerometer;
	e_gear m_gear;
	e_mode m_mode;
	Command *m_cmdTank, *m_cmdArcade;
	
	bool m_loaderFront;
	
public:
	Drive();
	void InitDefaultCommand();
	
	float SpeedLeft();												//Returns the encoder speed for the left side
	float SpeedRight();												//Returns the encoder speed for the right side
	float DistanceLeft();											//Returns the encoder distance for the left side
	float DistanceRight();											//Returns the encoder distance for the right side
	bool BrakeDeployed();											//Returns true if the brake pad is engaged, else false
	bool LoaderFront();												//Returns true if the loader is the front else false
//	float GetHeading();												//Returns heading given by the gyro
//	float GetAccelX();												//Returns Acceleration in X Direction
//	float GetAccelY();												//Returns Acceleration in Y Direction
	Drive::e_gear Gear();											//Returns what gear the robot is in	ex. low, high
	Drive::e_mode Mode();											//Returns what mode the robot is in ex. arcade, tank
	
	void JoystickArcadeDrive(float speed, float rotate); 			//Runs the robot in arcade mode with the speed and the rotation passed in
	void JoystickTankDrive(float speedLeft, float speedRight);		//Runs the robot in tank mode with the left and right speeds passed in
	void Brake(bool deploy);										//Engages the brake if passed true, else retracts
	void SetFront(bool loaderFront);								//Makes the loader the front if true else makes the shooter the front
	void Gear(Drive::e_gear gear);									//Sets the robot into the gear passed in
	void Mode(Drive::e_mode mode);									//Sets the robot to the mode passed in
	void Stop();													//Stops all motors that are a part of the drivetrain
	
};

#endif
