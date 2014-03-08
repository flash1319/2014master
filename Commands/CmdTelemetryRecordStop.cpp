#include "CmdTelemetryRecordStop.h"

CmdTelemetryRecordStop::CmdTelemetryRecordStop() : CommandBase("CmdTelemetryRecordStop") {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdTelemetryRecordStop::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdTelemetryRecordStop::Execute() {
	if(telemetry->RecordingTelemetry())
	{
		telemetry->StopTelemetry();
	}
}

// Make this return true when this Command no longer needs to run execute()
bool CmdTelemetryRecordStop::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdTelemetryRecordStop::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdTelemetryRecordStop::Interrupted() {
}
