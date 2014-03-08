#include "CmdShooterLatchToggle.h"
#include "CmdShooterLatch.h"
#include "CmdShooterUnlatch.h"

CmdShooterLatchToggle::CmdShooterLatchToggle() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdShooterLatchToggle::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterLatchToggle::Execute() {
	if(shooter->Latched() == true) {
		c = new CmdShooterUnlatch();
	}
	else {
		c = new CmdShooterLatch();
	}
	c->Start();
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterLatchToggle::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdShooterLatchToggle::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterLatchToggle::Interrupted() {
}
