#include "Telemetry.h"
#include "WPILib.h"

Telemetry::Telemetry() {
	m_telemetryFile = NULL;
	m_basePacketNumber = 0;
}

bool Telemetry::RecordingTelemetry() {
	return m_telemetryFile != NULL;
}

void Telemetry::StartTelemetry() {
	m_telemetryFile = fopen("Telemetry/Recordings.xml", "a");
	m_basePacketNumber = DriverStation::GetInstance()->GetPacketNumber();
	if (m_telemetryFile == NULL)
	{
		printf("Error Starting To Record Telemetry.\n");
	}
	else
	{
		fprintf(m_telemetryFile, "\n\n<?xml version=\"1.0\" ?>\r\n");
		fprintf(m_telemetryFile, "<telemetry>\r\n");
	}
}

void Telemetry::StopTelemetry() {
	if (m_telemetryFile != NULL)
	{
		fprintf( m_telemetryFile, "</telemetry> \r\n");
		fclose( m_telemetryFile );
		m_telemetryFile = NULL;
	}
}

void Telemetry::RecordSensor(const char *name, const char *value) {	
	if (m_telemetryFile != NULL)
	{
		DriverStation *ds = DriverStation::GetInstance();
		
		fprintf(m_telemetryFile, "<clock='%09d' object='%s' reading='%s'", ds->GetPacketNumber() - m_basePacketNumber, name, value);
		
		fprintf(m_telemetryFile, " />\r\n");
	}
}

void Telemetry::RecordSensorBoolean(const char *name, bool value) {
	const char *val = value ? "True" : "False";
	RecordSensor(name, val);
}

void Telemetry::RecordSensorFloat(const char *name, float value) {
	char val[10];
	snprintf(val, sizeof(val), "%f", value);
	RecordSensor(name, val);
}
