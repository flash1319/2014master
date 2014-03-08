#include "CmdLoaderLoad.h"
#include "../Robotmap.h"

CmdLoaderLoad::CmdLoaderLoad() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(loader);
}

// Called just before this Command runs the first time
void CmdLoaderLoad::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdLoaderLoad::Execute() {
	loader->RunIntake(LOADER_MOTOR_SPEED);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdLoaderLoad::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdLoaderLoad::End() {
	//loader->RunIntake(0.);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdLoaderLoad::Interrupted() {
	//loader->RunIntake(0.);
}
