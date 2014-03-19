#ifdef BUTTON_HEADERS
//Include Statements:
#include "Commands/CmdDriveShiftToggle.h"
#include "Commands/CmdFunnelsToggle.h"
#include "Commands/CmdDriveToggleFront.h"
#include "Commands/CmdLoaderExtensionToggle.h"
#include "Commands/CmdLoaderLoadingExtensionToggle.h"
#include "Commands/CmdLoaderUnjamToggle.h"
#include "Commands/CmdShooterHardStopToggle.h"
#include "Commands/CmdShooterLatchToggle.h"
#include "Commands/CmdShooterMotorsToggle.h"
#include "Commands/CmdShooterPullBack.h"
#include "Commands/CmdShooterReverseHeld.h"
#include "Commands/CmdShooterShoot.h"
#include "Commands/CmdShooterShootPass.h"
#include "Commands/CmdLoaderIntakeToggle.h"
#include "Commands/CgShooterFullPullback.h"

#else 
//Driver Buttons:
BUTTON_SETUP(m_driveShiftButton, m_driverPad, DRV_GEAR_SHIFT, WhenPressed, CmdDriveShiftToggle, )
//BUTTON_SETUP(m_driveToggleFrontButton, m_driverPad, DRV_SWITCH_FRONT, WhenPressed, CmdDriveToggleFront, )
BUTTON_SETUP(m_driverShooterShootButton, m_driverPad, DRV_SHOOT, WhenPressed, CmdShooterShoot, )
BUTTON_SETUP(m_driverShooterShootPassButton, m_driverPad, DRV_SHOOT_PASS, WhenPressed, CmdShooterShootPass, )
BUTTON_SETUP(m_driverShooterPullback, m_driverPad, DRV_SHOOTER_PULLBACK, WhenPressed, CgShooterFullPullback, )

//Operator Buttons:
BUTTON_SETUP(m_operatorLoaderLoadingExtendButton, m_operatorPad, OPR_LOADER_LOADING_EXTEND, WhenPressed, CmdLoaderLoadingExtensionToggle, )
BUTTON_SETUP(m_operatorLoaderUnjamButton, m_operatorPad, OPR_LOADER_UNJAM, WhenPressed, CmdLoaderUnjamToggle, )
BUTTON_SETUP(m_operatorHardStopButton, m_operatorPad, OPR_HARD_STOP, WhenPressed, CmdShooterHardStopToggle, )
BUTTON_SETUP(m_operatorLoaderExtendButton, m_operatorPad, OPR_LOADER_EXTEND, WhenPressed, CmdLoaderExtensionToggle, )
BUTTON_SETUP(m_operatorLoaderRun, m_operatorPad, OPR_LOADER_RUN, WhenPressed, CmdLoaderIntakeToggle, )
BUTTON_SETUP(m_operatorFunnelsButton, m_operatorPad, OPR_FUNNELS, WhenPressed, CmdFunnelsToggle, )
//BUTTON_SETUP(m_operatorLatchButton, m_operatorPad, OPR_LATCH, WhenPressed, CmdShooterLatchToggle, )
//BUTTON_SETUP(m_operatorShooterMotorsButton, m_operatorPad, OPR_ENGAGE_MOTORS, WhenPressed, CmdShooterMotorsToggle, )
//BUTTON_SETUP(m_operatorShooterPullBackButton, m_operatorPad, OPR_SHOOTER_PULL_BACK, WhenPressed, CmdShooterPullBack, )
//BUTTON_SETUP(m_operatorShooterReverseButton, m_operatorPad, OPR_SHOOTER_REVERSE, WhileHeld, CmdShooterReverseHeld, )
#endif
