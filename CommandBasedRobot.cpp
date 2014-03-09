#include "WPILib.h"
#include "Commands/Command.h"
#include "CommandBase.h"
#include "Subsystems/Pneumatics.h"
#include "Commands/CmdDriveChangeMode.h"
#include "Commands/CmdTelemetryRecordStart.h"
#include "Commands/CmdTelemetryRecordStop.h"
#include "Commands/CgAutonomousOne.h"
#include "Commands/CgAutonomousTwo.h"
#include "Commands/CgAutonomousThree.h"
#include "Commands/CgAutonomousFour.h"
#include "Commands/CgAutonomousFive.h"
#include "InsightLT/InsightLT.h"

class CommandBasedRobot : public IterativeRobot {
private:
	Command *autonomousCommand;
	LiveWindow *lw;
	Pneumatics *pneumatics;
	insight::InsightLT *display;
	insight::DecimalData *disp_batteryVoltage;
	insight::StringData *disp_pressureSensor;
	SendableChooser *autoChooser;
	
	virtual void RobotInit() {
		CommandBase::init();
		autonomousCommand = NULL;
		lw = LiveWindow::GetInstance();
		
		pneumatics = new Pneumatics();
		pneumatics->Start();
		
		InitializeDisplay();
		
		autoChooser = new SendableChooser();
		autoChooser->AddDefault("One Ball Auto", new CgAutonomousOne());
		autoChooser->AddObject("Waiting One Ball Auto", new CgAutonomousTwo());
		autoChooser->AddObject("Hot Goal Auto", new CgAutonomousThree());
		autoChooser->AddObject("Two Ball Auto", new CgAutonomousFour());
		autoChooser->AddObject("No Ball Auto", new CgAutonomousFive());
		SmartDashboard::PutData("Autonomous Mode:", autoChooser);
		SmartDashboard::PutData("Toggle Drive Mode", new CmdDriveChangeMode());
		SmartDashboard::PutData("Start Recording Telemetry", new CmdTelemetryRecordStart());
		SmartDashboard::PutData("Stop Recording Telemetry", new CmdTelemetryRecordStop());
	}
	
	virtual void AutonomousInit() {
		autonomousCommand = (Command *)(autoChooser->GetSelected());
		if(autonomousCommand != NULL) {
			autonomousCommand->Start();
		}
	}
	
	virtual void AutonomousPeriodic() {
		Scheduler::GetInstance()->Run();
		CommandBase::shooter->UpdateBling();
	}
	
	virtual void TeleopInit() {
		// This makes sure that the autonomous stops running when
		// teleop starts running. If you want the autonomous to 
		// continue until interrupted by another command, remove
		// this line or comment it out.
		if(autonomousCommand != NULL) {
			autonomousCommand->Cancel();
		}
//		CommandBase::shooter->SetCameraLED(true);
	}
	
	virtual void TeleopPeriodic() {
		Scheduler::GetInstance()->Run();
		if(DriverStation::GetInstance()->GetPacketNumber() % 5 == 0) {
			UpdateTelemetry();
		}

//		if(DriverStation::GetInstance()->GetPacketNumber() % 100 == 0)
//		{
//			SmartDashboard::PutBoolean("Hot Goal", CommandBase::vision->hotGoal());
//		}
		
		UpdateSmartDashboard();
		
		UpdateDisplay();
		
		CommandBase::shooter->UpdateBling();
	}
	\
	virtual void DisabledInit() {
		
	}
	
	virtual void DisabledPeriodic() {
		UpdateSmartDashboard();
		UpdateDisplay();
	}
	
	virtual void TestPeriodic() {
		lw->Run();
	}
	
	void UpdateSmartDashboard() {
		SmartDashboard::PutString("Mode", CommandBase::drive->Mode() == Drive::arcade ? "Arcade" : "Tank");
		SmartDashboard::PutString("Gear", CommandBase::drive->Gear() == Drive::high ? "High" : "Low");
		SmartDashboard::PutString("Front Side", CommandBase::drive->LoaderFront() ? "Loader" : "Shooter");
		SmartDashboard::PutBoolean("Air Pressure Full", pneumatics->TankFull());
		SmartDashboard::PutNumber("Pressure", pneumatics->GetPressure());
		SmartDashboard::PutNumber("Left Speed", CommandBase::drive->SpeedLeft());
		SmartDashboard::PutNumber("Right Speed", CommandBase::drive->SpeedRight());
		SmartDashboard::PutNumber("Left Distance", CommandBase::drive->DistanceLeft());
		SmartDashboard::PutNumber("Right Distance", CommandBase::drive->DistanceRight());
//		SmartDashboard::PutBoolean("Brake Deployed", CommandBase::drive->BrakeDeployed());
		SmartDashboard::PutBoolean("Line Ball In", CommandBase::shooter->LineBallIn());
		SmartDashboard::PutBoolean("Funnels Deployed", CommandBase::funnels->FunnelsDeployed());
		SmartDashboard::PutBoolean("Intake Running", CommandBase::loader->IntakeRunning());
		SmartDashboard::PutBoolean("Intake Extended", CommandBase::loader->IntakeExtended());
		SmartDashboard::PutBoolean("Ball In Proximity", CommandBase::loader->BallProximity());
		SmartDashboard::PutBoolean("Shooter Latched", CommandBase::shooter->Latched());
		SmartDashboard::PutBoolean("Shooter Motor Engaged", CommandBase::shooter->MotorEngaged());
		SmartDashboard::PutString("Shot Length", CommandBase::shooter->HardStopEngaged() ? "Long Shot" : "Short Shot");
		SmartDashboard::PutBoolean("Shooter Fully Retracted", CommandBase::shooter->FullyRetracted());
		SmartDashboard::PutBoolean("Shooter Latched Limit", CommandBase::shooter->LatchedSwitch());
		SmartDashboard::PutBoolean("Shooter Gearbox Engaged Switch", CommandBase::shooter->GearSwitchEngaged());
		SmartDashboard::PutBoolean("Ball Loaded", CommandBase::shooter->BallInside());
		SmartDashboard::PutNumber("Range Finder Distance", CommandBase::shooter->GetDistance());
//		SmartDashboard::PutNumber("Gyro Heading", CommandBase::drive->GetHeading());
//		SmartDashboard::PutNumber("Acceleration X", CommandBase::drive->GetAccelX());
//		SmartDashboard::PutNumber("Acceleration Y", CommandBase::drive->GetAccelY());
		SmartDashboard::PutBoolean("Recording Telemetry", CommandBase::telemetry->RecordingTelemetry());
		SmartDashboard::PutNumber("Kinect Left Y", CommandBase::oi->KinectLeftY());
		SmartDashboard::PutNumber("Kinect Right Y", CommandBase::oi->KinectRightY());
	}
	
	void UpdateTelemetry() {
		CommandBase::telemetry->RecordSensorFloat("Drive Encoder Left Speed", CommandBase::drive->SpeedLeft());
		CommandBase::telemetry->RecordSensorFloat("Drive Encoder Right Speed", CommandBase::drive->SpeedRight());
		CommandBase::telemetry->RecordSensorFloat("Drive Encoder Left Distance", CommandBase::drive->DistanceLeft());
		CommandBase::telemetry->RecordSensorFloat("Drive Encoder Right Distance", CommandBase::drive->DistanceRight());
		//CommandBase::telemetry->RecordSensorFloat("Drive Gyro Heading", CommandBase::drive->GetHeading());
		//CommandBase::telemetry->RecordSensorFloat("Drive Accelerometer X", CommandBase::drive->GetAccelX());
		//CommandBase::telemetry->RecordSensorFloat("Drive Accelerometer Y", CommandBase::drive->GetAccel());
		CommandBase::telemetry->RecordSensorBoolean("Loader Ball Proximity Switch", CommandBase::loader->BallProximity());
		CommandBase::telemetry->RecordSensorBoolean("Pneumatics Digital Pressure Switch", pneumatics->TankFull());
		CommandBase::telemetry->RecordSensorFloat("Pneumatics Analog Pressure Sensor", pneumatics->GetPressure());
		CommandBase::telemetry->RecordSensorBoolean("Shooter Retraction Limit Switch", CommandBase::shooter->FullyRetracted());
		CommandBase::telemetry->RecordSensorBoolean("Shooter Latched Limit", CommandBase::shooter->LatchedSwitch());
		CommandBase::telemetry->RecordSensorBoolean("Shooter Gearbox Engaged Switch", CommandBase::shooter->GearSwitchEngaged());
		CommandBase::telemetry->RecordSensorFloat("Shooter Ultrasonic Sensor", CommandBase::shooter->GetDistance());
		CommandBase::telemetry->RecordSensorBoolean("Shooter Ball Limit Switch", CommandBase::shooter->BallInside());
		CommandBase::telemetry->RecordSensorBoolean("Shooter Line Ball In", CommandBase::shooter->LineBallIn());
	}
	
	void InitializeDisplay() {
		display = new insight::InsightLT(insight::TWO_ONE_LINE_ZONES);
		disp_batteryVoltage = new insight::DecimalData("Battery: ");
		disp_pressureSensor = new insight::StringData("Pressure: ");
		display->registerData(*disp_batteryVoltage, 1);
		display->registerData(*disp_pressureSensor, 2);
		display->startDisplay();
	}
	
	void UpdateDisplay() {
		disp_batteryVoltage->setData(DriverStation::GetInstance()->GetBatteryVoltage());
		int pressure = pneumatics->GetPressure();
		char temp[10];
		string emoticon = "";
		
		if(pressure >= 106) {
			emoticon = "=D";
		}
		else if(pressure >= 89) {
			emoticon = "=)";
		}
		else if(pressure >= 72) {
			emoticon = ":)";
		}
		else if(pressure >= 55) {
			emoticon = ":|";
		}
		else if(pressure >= 38) {
			emoticon = ":(";
		}
		else if(pressure >= 20) {
			emoticon = "=(";
		}
		else {
			emoticon = "D=";
		}
		
		sprintf(temp, "%d%s%s", pressure, "psi", emoticon.c_str());
		disp_pressureSensor->setData(temp);
	}
};

START_ROBOT_CLASS(CommandBasedRobot);

