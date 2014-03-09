#include "CgAutonomousOne.h"
#include "CmdShooterPullBack.h"
#include "CmdLoaderExtend.h"
#include "CmdFunnelsDeploy.h"
#include "CmdShooterLatch.h"
#include "CmdShooterUnlatch.h"
#include "CgRetractAppendages.h"
#include "CmdShooterMotorsEngage.h"
#include "CmdShooterMotorsDisengage.h"
#include "CmdShooterReverse.h"
#include "CmdShooterStop.h"
#include "CmdWaitForLatch.h"
#include "CmdWaitForUnlatch.h"
#include "CmdWaitForShooterEngage.h"
#include "CmdWaitForShooterDisengage.h"
#include "CmdShooterSlowPull.h"
#include "CmdDriveProgrammed.h"
#include "CmdWait.h"
#include "../Robotmap.h"

CgAutonomousOne::CgAutonomousOne() {
	//The loader and funnels extend and wait for the ball to settle
	AddSequential(new CmdLoaderExtend());
	AddSequential(new CmdWait(LOADER_EXTENSION_TIME));
	AddSequential(new CmdFunnelsDeploy());
	AddSequential(new CmdWait(LOADER_FUNNELS_DEPLOYMENT_WAIT_TIME));
	AddSequential(new CmdWait(BALL_WAIT_FOR_SETTLE));
	
	//The catapult unlatches to shoot and the robot starts to drive forward
	AddSequential(new CmdShooterUnlatch());
	AddSequential(new CmdWaitForUnlatch());
	AddSequential(new CmdWait(SHOOTER_SHOOT_TIME));
	AddParallel(new CmdDriveProgrammed(AUTONOMOUS_SPEED, AUTONOMOUS_SPEED, AUTONOMOUS_DRIVE_TIME));
	
	//Shooter motors pull back the catapult and it is readied to be fired in tele-op
	AddParallel(new CgRetractAppendages());
	AddSequential(new CmdShooterMotorsEngage());
	AddSequential(new CmdShooterSlowPull());
	AddSequential(new CmdWaitForShooterEngage());
	AddSequential(new CmdWait(SHOOTER_WAIT_FOR_FULL_SPEED));
	AddSequential(new CmdShooterPullBack());
	AddSequential(new CmdWaitForLatch());
	AddSequential(new CmdShooterMotorsDisengage());
	AddSequential(new CmdShooterReverse());
	AddSequential(new CmdWaitForShooterDisengage());
	AddSequential(new CmdShooterStop());
}
