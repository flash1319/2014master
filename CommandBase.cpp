#include "CommandBase.h"
#include "Commands/Scheduler.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
Drive* CommandBase::drive = NULL;
Funnels* CommandBase::funnels = NULL;
Loader* CommandBase::loader	= NULL;
Shooter* CommandBase::shooter = NULL;
Telemetry* CommandBase::telemetry = NULL;
Vision* CommandBase::vision = NULL;

OI* CommandBase::oi = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	drive = new Drive();
	funnels = new Funnels();
	loader = new Loader();
	shooter = new Shooter();
	telemetry = new Telemetry();
	vision = new Vision();
	
	//Be sure to initialize this after the rest of the subsystems, or else there will be an error in the Requires() method calls of the commands linked to buttons
	oi = new OI();
}
