#include "CmdShooterShoot.h"
#include "CgShooterShoot.h"

CmdShooterShoot::CmdShooterShoot() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdShooterShoot::Initialize() {
	cg = NULL;
	if(shooter->LineBallIn() || oi->driveShooterSafeOverride()) {
		if(oi->driveShooterSafeOverride()) {
			shooter->SetShooterOverridden(true);
		}
		cg = new CgShooterShoot();
		cg->Start();
	}
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterShoot::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterShoot::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdShooterShoot::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterShoot::Interrupted() {
	
}
