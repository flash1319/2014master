#include "CgAutonomousSeven.h"
#include "CmdShooterPullBack.h"
#include "CmdLoaderExtendAndWait.h"
#include "CmdFunnelsDeployAndWait.h"
#include "CmdShooterLatch.h"
#include "CmdShooterUnlatchAutonomous.h"
#include "CgRetractAppendages.h"
#include "CmdShooterMotorsEngage.h"
#include "CmdShooterMotorsDisengage.h"
#include "CmdShooterReverse.h"
#include "CmdShooterStop.h"
#include "CmdWaitForLatch.h"
#include "CmdShooterUnlatch.h"
#include "CmdWaitForUnlatch.h"
#include "CmdWaitForShooterEngage.h"
#include "CmdWaitForShooterDisengage.h"
#include "CmdWaitForBallProximity.h"
#include "CmdShooterSlowPull.h"
#include "CmdDriveProgrammed.h"
#include "CgShooterShoot.h"
#include "CmdLoaderLoad.h"
#include "CmdFunnelsUndeploy.h"
#include "CmdLoaderRetract.h"
#include "CmdLoaderStop.h"
#include "CmdWait.h"
#include "CmdWaitAndDrive.h"
#include "../Robotmap.h"

CgAutonomousSeven::CgAutonomousSeven() {
	//Shooter shoots and pulls back just as in tele-op
//	AddParallel(new CmdWaitAndDrive());
	//Extends the loader and funnels if they are not yet deployed and waits for the ball to settle
	AddSequential(new CmdLoaderExtendAndWait());
	AddSequential(new CmdFunnelsDeployAndWait());
	AddSequential(new CmdWait(BALL_WAIT_FOR_SETTLE));
	
	//The catapult unlatches to shoot
	AddSequential(new CmdShooterUnlatch());
	AddSequential(new CmdWaitForUnlatch());
	AddSequential(new CmdWait(SHOOTER_SHOOT_TIME));
	
	//Pulls the ball up just enough so it is in the control of the robot, then drives forward
	AddSequential(new CmdLoaderLoad());
	AddSequential(new CmdWaitForBallProximity());
	AddSequential(new CmdWait(AUTONOMOUS_LOAD_TIME));
	AddSequential(new CmdLoaderStop());
	AddSequential(new CmdDriveProgrammed(AUTONOMOUS_SPEED, AUTONOMOUS_SPEED, AUTONOMOUS_DRIVE_TIME));	
	
	//The motors engage and the shooter readies itself for the next shot
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
	
	//Pulls the ball the rest of the way into the loader
	AddSequential(new CmdLoaderLoad());
	AddSequential(new CmdWait(LOADER_WAIT_BEFORE_CHECK_PROXIMITY));
	AddSequential(new CmdWaitForBallProximity());
	AddSequential(new CmdFunnelsUndeploy());
	AddSequential(new CmdWait(LOADER_FUNNELS_DEPLOYMENT_WAIT_TIME));
	AddSequential(new CmdLoaderRetract());
	AddSequential(new CmdWait(LOADER_PULL_BALL_TIME));
	AddSequential(new CmdLoaderStop());
	
	//Loader and funnels deploy again and wait for the ball to settle
	AddSequential(new CmdLoaderExtendAndWait());
	AddSequential(new CmdFunnelsDeployAndWait());
	AddSequential(new CmdWait(BALL_WAIT_FOR_SETTLE));
	
	//Shooter unlatches in order to shoot
	AddSequential(new CmdShooterUnlatchAutonomous());
	AddSequential(new CmdWaitForUnlatch());
	AddSequential(new CmdWait(SHOOTER_SHOOT_TIME));
	
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
