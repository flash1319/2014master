#include "CmdLoaderUnjamToggle.h"
#include "CmdLoaderStop.h"
#include "CmdLoaderUnjam.h"

CmdLoaderUnjamToggle::CmdLoaderUnjamToggle() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdLoaderUnjamToggle::Initialize() {
	c = NULL;
}

// Called repeatedly when this Command is scheduled to run
void CmdLoaderUnjamToggle::Execute() {
	if(loader->IntakeRunning())
	{
		c = new CmdLoaderStop();
	}
	else
	{
		c = new CmdLoaderUnjam();
	}
	c->Start();
}

// Make this return true when this Command no longer needs to run execute()
bool CmdLoaderUnjamToggle::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdLoaderUnjamToggle::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdLoaderUnjamToggle::Interrupted() {
}
