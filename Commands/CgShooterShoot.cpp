#include "CgShooterShoot.h"
#include "CmdShooterPullBack.h"
#include "CmdLoaderExtendAndWait.h"
#include "CmdFunnelsDeployAndWait.h"
#include "CmdShooterLatch.h"
#include "CmdShooterUnlatch.h"
#include "CmdFunnelsUndeploy.h"
#include "CmdLoaderRetract.h"
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
#include "CmdWait.h"
#include "../Robotmap.h"

CgShooterShoot::CgShooterShoot() {
//	SetInterruptible(false);
	
	//Extends the loader and funnels if they are not yet deployed and waits for the ball to settle
//	AddSequential(new CmdLoaderExtendAndWait());
	AddSequential(new CmdFunnelsDeployAndWait());
	AddSequential(new CmdWait(BALL_WAIT_FOR_SETTLE));
	
	//The catapult unlatches to shoot
	AddSequential(new CmdShooterUnlatch());
	AddSequential(new CmdWaitForUnlatch());
	AddSequential(new CmdWait(SHOOTER_SHOOT_TIME));
	
	//The motors engage and the shooter readies itself for the next shot
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
