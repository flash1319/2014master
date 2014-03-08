#include "CmdTelemetryRecordStart.h"

CmdTelemetryRecordStart::CmdTelemetryRecordStart() : CommandBase("CmdTelemetryRecordStart") {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdTelemetryRecordStart::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdTelemetryRecordStart::Execute() {
	if(!telemetry->RecordingTelemetry())
	{
		telemetry->StartTelemetry();
	}
}

// Make this return true when this Command no longer needs to run execute()
bool CmdTelemetryRecordStart::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdTelemetryRecordStart::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdTelemetryRecordStart::Interrupted() {
}
