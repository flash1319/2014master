#include "CmdDriveAutonomous.h"
#include "../Robotmap.h"

CmdDriveAutonomous::CmdDriveAutonomous(float distance) {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(drive);
	m_distance = distance;
}

// Called just before this Command runs the first time
void CmdDriveAutonomous::Initialize() {
	m_leftStartDistance = drive->DistanceLeft();
	m_rightStartDistance = drive->DistanceRight();
}

// Called repeatedly when this Command is scheduled to run
void CmdDriveAutonomous::Execute() {
	float leftCurrent = drive->DistanceLeft() - m_leftStartDistance;
	float rightCurrent = drive->DistanceRight() - m_rightStartDistance;
	float encoderDifference = leftCurrent - rightCurrent;
	drive->JoystickTankDrive(AUTONOMOUS_DRIVE_BASE_SPEED - encoderDifference * AUTONOMOUS_DRIVE_P_CONSTANT, 
							 AUTONOMOUS_DRIVE_BASE_SPEED + encoderDifference * AUTONOMOUS_DRIVE_P_CONSTANT);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdDriveAutonomous::IsFinished() {
	return (drive->DistanceLeft() - m_leftStartDistance >= m_distance) || 
		   (drive->DistanceRight() - m_rightStartDistance >= m_distance);
}

// Called once after isFinished returns true
void CmdDriveAutonomous::End() {
	drive->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdDriveAutonomous::Interrupted() {
	drive->Stop();
}
