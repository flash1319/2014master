#include "CgShooterFullPullback.h"
#include "CmdShooterMotorsEngage.h"
#include "CmdShooterSlowPull.h"
#include "CmdWaitForShooterEngage.h"
#include "CmdShooterPullBack.h"
#include "CmdWaitForLatch.h"
#include "CmdShooterMotorsDisengage.h"
#include "CmdShooterReverse.h"
#include "CmdWaitForShooterDisengage.h"
#include "CmdShooterStop.h"
#include "CmdWait.h"
#include "../Robotmap.h"

CgShooterFullPullback::CgShooterFullPullback() {
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
