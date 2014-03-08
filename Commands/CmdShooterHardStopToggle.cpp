#include "CmdShooterHardStopToggle.h"
#include "CmdShooterHardStopExtend.h"
#include "CmdShooterHardStopRetract.h"

CmdShooterHardStopToggle::CmdShooterHardStopToggle() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdShooterHardStopToggle::Initialize() {
	c = NULL;
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterHardStopToggle::Execute() {
	if(shooter->HardStopEngaged() == true) {
		c = new CmdShooterHardStopRetract();
	}
	else {
		c = new CmdShooterHardStopExtend();
	}
	c->Start();
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterHardStopToggle::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdShooterHardStopToggle::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterHardStopToggle::Interrupted() {
}
