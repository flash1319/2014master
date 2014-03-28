#include "CgAutonomousFive.h"
#include "CmdDriveProgrammed.h"
#include "CmdShooterBlingFlash.h"
#include "CmdShooterBlingSolid.h"
#include "../Robotmap.h"

CgAutonomousFive::CgAutonomousFive() {
	//Starts driving the robot forward
	AddSequential(new CmdShooterBlingFlash());
	AddSequential(new CmdDriveProgrammed(AUTONOMOUS_SPEED, AUTONOMOUS_SPEED, AUTONOMOUS_DRIVE_TIME));
	AddSequential(new CmdShooterBlingSolid());
}
