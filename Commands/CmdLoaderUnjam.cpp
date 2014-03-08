#include "CmdLoaderUnjam.h"
#include "../Robotmap.h"

CmdLoaderUnjam::CmdLoaderUnjam() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(loader);
}

// Called just before this Command runs the first time
void CmdLoaderUnjam::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdLoaderUnjam::Execute() {
	loader->RunIntake(LOADER_MOTOR_REVERSE_SPEED);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdLoaderUnjam::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdLoaderUnjam::End() {
	//loader->RunIntake(0.);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdLoaderUnjam::Interrupted() {
	//loader->RunIntake(0.);
}
