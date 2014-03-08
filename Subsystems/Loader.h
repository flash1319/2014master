#ifndef LOADER_H
#define LOADER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 * @author Flash1319
 */
class Loader: public Subsystem {
private:
	Victor *m_ballIntake;
	DoubleSolenoid *m_solIntakeExtend;
	DigitalInput *m_ballInSwitch, *m_ballProximitySwitch;
	
public:
	Loader();
	void InitDefaultCommand();
	
	bool IntakeRunning();			//Returns true if the intake motor is running, else false
	bool IntakeExtended();			//Returns true if the intake is extended, else false
	bool BallProximity();			//Returns true if a ball is in the proximity of the loader, else false
	
	void RunIntake(float speed);	//Sets the intake rollers to run at the speed passed in
	void SetExtended(bool extend);	//Extends the intake if passed true, else retracts
	void LoaderPeriodic();			//Does tasks periodically in Teleop Mode
};


#endif
