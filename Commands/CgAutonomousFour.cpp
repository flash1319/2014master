#include "CgAutonomousFour.h"
#include "CmdShooterPullBack.h"
#include "CmdLoaderExtend.h"
#include "CmdFunnelsDeploy.h"
#include "CmdShooterLatch.h"
#include "CmdShooterUnlatchAutonomous.h"
#include "CgRetractAppendages.h"
#include "CmdShooterMotorsEngage.h"
#include "CmdShooterMotorsDisengage.h"
#include "CmdShooterReverse.h"
#include "CmdShooterStop.h"
#include "CmdWaitForLatch.h"
#include "CmdWaitForUnlatch.h"
#include "CmdWaitForShooterEngage.h"
#include "CmdWaitForShooterDisengage.h"
#include "CmdWaitForBallProximity.h"
#include "CmdShooterSlowPull.h"
#include "CmdDriveProgrammed.h"
#include "CmdShooterShoot.h"
#include "CmdLoaderLoad.h"
#include "CmdFunnelsUndeploy.h"
#include "CmdLoaderRetract.h"
#include "CmdLoaderStop.h"
#include "CmdWait.h"
#include "CmdWaitAndDrive.h"
#include "../Robotmap.h"


CgAutonomousFour::CgAutonomousFour() {
	//Shooter shoots and pulls back just as in tele-op
//	AddParallel(new CmdWaitAndDrive());
	AddSequential(new CmdShooterShoot());
	
	//Loads the ball, pulls it in, and makes sure it is captured in the funnel
	AddSequential(new CmdLoaderLoad());
	//AddSequential(new CmdWait(AUTONOMOUS_LOAD_TIME));
	AddSequential(new CmdWait(LOADER_WAIT_BEFORE_CHECK_PROXIMITY));
	AddSequential(new CmdWaitForBallProximity());
	AddSequential(new CmdFunnelsUndeploy());
	AddSequential(new CmdWait(LOADER_FUNNELS_DEPLOYMENT_WAIT_TIME));
	AddSequential(new CmdLoaderRetract());
	AddSequential(new CmdWait(LOADER_PULL_BALL_TIME));
	AddSequential(new CmdLoaderStop());
	
	//Loader and funnels deploy again and wait for the ball to settle
	AddSequential(new CmdLoaderExtend());
	AddSequential(new CmdWait(LOADER_EXTENSION_TIME));
	AddSequential(new CmdFunnelsDeploy());
	AddSequential(new CmdWait(LOADER_FUNNELS_DEPLOYMENT_WAIT_TIME));
	AddSequential(new CmdWait(BALL_WAIT_FOR_SETTLE));
	
	//Shooter unlatches in order to shoot and robot drives forward
	AddSequential(new CmdShooterUnlatchAutonomous());
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
