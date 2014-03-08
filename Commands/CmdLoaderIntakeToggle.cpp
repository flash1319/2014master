#include "CmdLoaderIntakeToggle.h"
#include "CmdLoaderLoad.h"
#include "CmdLoaderStop.h"

CmdLoaderIntakeToggle::CmdLoaderIntakeToggle() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdLoaderIntakeToggle::Initialize() {
	c = NULL;
}

// Called repeatedly when this Command is scheduled to run
void CmdLoaderIntakeToggle::Execute() {
	if(loader->IntakeRunning() == true) {
		c = new CmdLoaderStop();
	}
	else {
		c = new CmdLoaderLoad();
	}
	c->Start();
}

// Make this return true when this Command no longer needs to run execute()
bool CmdLoaderIntakeToggle::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdLoaderIntakeToggle::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdLoaderIntakeToggle::Interrupted() {
}
