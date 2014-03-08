#include "CgAutonomousFive.h"
#include "CmdDriveProgrammed.h"
#include "../Robotmap.h"

CgAutonomousFive::CgAutonomousFive() {
	//Starts driving the robot forward
	AddSequential(new CmdDriveProgrammed(AUTONOMOUS_SPEED, AUTONOMOUS_SPEED, AUTONOMOUS_DRIVE_TIME));
}
