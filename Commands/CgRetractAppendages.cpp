#include "CgRetractAppendages.h"
#include "CmdLoaderRetract.h"
#include "CmdFunnelsUndeploy.h"
#include "CmdWait.h"
#include "../Robotmap.h"

CgRetractAppendages::CgRetractAppendages() {
	AddSequential(new CmdFunnelsUndeploy());
	AddSequential(new CmdWait(LOADER_FUNNELS_DEPLOYMENT_WAIT_TIME));
	AddSequential(new CmdLoaderRetract());

}
