#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Command.h"
#include "OI.h"
#include "Subsystems/Drive.h"
#include "Subsystems/Funnels.h"
#include "Subsystems/Loader.h"
#include "Subsystems/Shooter.h"
#include "Telemetry.h"
#include "Vision.h"


/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(const char *name);
	CommandBase();
	static void init();
	// Create a single static instance of all of your subsystems
	static Drive *drive;
	static Funnels *funnels;
	static Loader *loader;
	static Shooter *shooter;
	static Telemetry *telemetry;
	static Vision *vision;

	static OI *oi;
};

#endif
