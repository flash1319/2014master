#ifndef TELEMETRY_H
#define TELEMETRY_H

#include "stdio.h"

class Telemetry {
private:
	FILE *m_telemetryFile;
	UINT32 m_basePacketNumber;
	
	
public:
	Telemetry();													//Constructs the Telemetry class with a null file
	
	bool RecordingTelemetry();										//Returns true if the telemetry is currently being recorded, else false
	
	void StartTelemetry();											//Starts recording the telemetry, opening the file and the xml tags
	void StopTelemetry();											//Stops recording the telemetry, closing the tags of the file and closing the file
	void RecordSensor(const char *name, const char *value);			//Records the information from a sensor to the telemetry file
	void RecordSensorBoolean(const char *name, bool value);			//Wrapper function to record boolean sensors
	void RecordSensorFloat(const char *name, float value);			//Wrapper function to record floating point sensors
};

#endif
