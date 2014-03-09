#ifndef FUNNELS_H
#define FUNNELS_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 * @author Flash1319
 */
class Funnels: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	
//	DoubleSolenoid *m_solFunnels;
	Relay *m_tempRelayFunnelsA, *m_tempRelayFunnelsB;
	
public:
	Funnels();
	void InitDefaultCommand();
	
	bool FunnelsDeployed();				//Returns true if the funnels are extended, else false
	
	void DeployFunnels(bool deploy);	//Extends the funnels if passed a true value, else retracts
};

#endif
