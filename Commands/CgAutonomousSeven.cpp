#include "CgAutonomousSeven.h"
#include "CmdShooterPullBack.h"
#include "CmdLoaderExtend.h"
#include "CmdLoaderExtendAndWait.h"
#include "CmdFunnelsDeploy.h"
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
#include "CmdKinectCheckAuto.h"
#include "CmdTurnWithKinect.h"
#include "CmdTurnWithKinectBack.h"
#include "CmdTurnWithKinectTwo.h"
#include "../Robotmap.h"


CgAutonomousSeven::CgAutonomousSeven() {
	//Shooter shoots and pulls back just as in tele-op
	//Extends the loader and funnels if they are not yet deployed and waits for the ball to settle
	AddSequential(new CmdKinectCheckAuto());
	AddSequential(new CmdTurnWithKinect());
	AddSequential(new CmdLoaderExtendAndWait());
	AddSequential(new CmdFunnelsDeployAndWait());
	AddSequential(new CmdWait(BALL_WAIT_FOR_SETTLE));
	
	//The catapult unlatches to shoot
	AddSequential(new CmdShooterUnlatch());
	AddSequential(new CmdWaitForUnlatch());
	AddSequential(new CmdWait(SHOOTER_SHOOT_TIME));
	
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
	
	//Loads the ball, pulls it in, and makes sure it is captured in the funnel
	AddSequential(new CmdLoaderLoad());
	AddSequential(new CmdTurnWithKinectBack());
	AddSequential(new CmdWait(LOADER_WAIT_BEFORE_CHECK_PROXIMITY));
	AddSequential(new CmdWaitForBallProximity());
	AddSequential(new CmdWait(0.5));
	AddSequential(new CmdLoaderRetract());
	AddSequential(new CmdWait(LOADER_PULL_BALL_TIME));
	AddSequential(new CmdLoaderStop());
	
	//Loader and funnels deploy again and wait for the ball to settle
	AddSequential(new CmdTurnWithKinectTwo());
	AddSequential(new CmdLoaderExtend());
	AddSequential(new CmdWait(LOADER_EXTENSION_TIME));
	AddSequential(new CmdWait(BALL_WAIT_FOR_SETTLE));
	
	//Shooter unlatches in order to shoot and robot drives forward
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
