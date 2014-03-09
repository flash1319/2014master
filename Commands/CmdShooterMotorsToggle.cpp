#include "CmdShooterMotorsToggle.h"
#include "CmdShooterMotorsEngage.h"
#include "CmdShooterMotorsDisengage.h"

CmdShooterMotorsToggle::CmdShooterMotorsToggle() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdShooterMotorsToggle::Initialize() {
	c = NULL;
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterMotorsToggle::Execute() {
	if(shooter->MotorEngaged() == true) {
		c = new CmdShooterMotorsDisengage();
	}
	else {
		c = new CmdShooterMotorsEngage();
	}
	c->Start();
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterMotorsToggle::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdShooterMotorsToggle::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterMotorsToggle::Interrupted() {
}
