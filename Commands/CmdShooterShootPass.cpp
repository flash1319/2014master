#include "CmdShooterShootPass.h"
#include "CgShooterShootPass.h"

CmdShooterShootPass::CmdShooterShootPass() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdShooterShootPass::Initialize() {
	cg = NULL;
	if(shooter->LineBallIn() || oi->driveShooterSafeOverride()) {
		if(oi->driveShooterSafeOverride()) {
			shooter->SetShooterOverridden(true);
		}
		cg = new CgShooterShootPass();
		cg->Start();
	}
	
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterShootPass::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterShootPass::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdShooterShootPass::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterShootPass::Interrupted() {
}
