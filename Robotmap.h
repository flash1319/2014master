#ifndef ROBOTMAP_H
#define ROBOTMAP_H

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
// #define LEFTMOTOR 1
// #define RIGHTMOTOR 2
const UINT32 PWM_LEFT_ONE						= 1;
const UINT32 PWM_LEFT_TWO						= 2;
const UINT32 PWM_LEFT_THREE						= 3;
const UINT32 PWM_RIGHT_ONE						= 4;
const UINT32 PWM_RIGHT_TWO						= 5;
const UINT32 PWM_RIGHT_THREE					= 6;
const UINT32 PWM_BALL_PICKUP_WHEEL				= 7;	//Chuck's Victor 7 on practice
const UINT32 PWM_SHOOTER_PULLBACK				= 8;	//Chuck's Victor 3 on practice

const UINT32 GPIO_RIGHT_ENCODER_A				= 1;
const UINT32 GPIO_RIGHT_ENCODER_B				= 2;
const UINT32 GPIO_LEFT_ENCODER_A				= 3;
const UINT32 GPIO_LEFT_ENCODER_B				= 4;
const UINT32 GPIO_BALL_IN_SWITCH				= 5;	//Port for physical button switch in ring
const UINT32 GPIO_SHOOTER_RETRACTED_LIMIT		= 6;
const UINT32 GPIO_BALL_PROXIMITY_SWITCH			= 7;	//Port for ball line sensor on loader
const UINT32 GPIO_LATCHED_SWITCH				= 8;
const UINT32 GPIO_LINE_BALL_IN					= 9;	//Port for ball line sensor in ring
const UINT32 GPIO_SHOOTER_GEAR_ENGAGED			= 10;
const UINT32 GPIO_PRESSURE						= 14;

const UINT32 SOL_GEAR_SHIFT_MODULE				= 1;
const UINT32 SOL_BALL_PICKUP_DEPLOY_MODULE		= 1;
const UINT32 SOL_SHOOTER_ENGAGE_MODULE			= 1;
const UINT32 SOL_HARD_STOP_MODULE				= 1;
const UINT32 SOL_FUNNEL_DEPLOY_MODULE			= 2;
const UINT32 SOL_SHOOTER_LATCH_MODULE			= 2;

const UINT32 SOL_GEAR_SHIFT_A					= 1;
const UINT32 SOL_GEAR_SHIFT_B					= 2;
const UINT32 SOL_BALL_PICKUP_DEPLOY_A			= 3;
const UINT32 SOL_BALL_PICKUP_DEPLOY_B			= 4;
const UINT32 SOL_SHOOTER_ENGAGE_A				= 5;
const UINT32 SOL_SHOOTER_ENGAGE_B				= 6;
const UINT32 SOL_HARD_STOP_A					= 7;
const UINT32 SOL_HARD_STOP_B					= 8;
const UINT32 SOL_FUNNEL_DEPLOY_A				= 1;
const UINT32 SOL_FUNNEL_DEPLOY_B				= 2;
const UINT32 SOL_SHOOTER_LATCH					= 4;

const UINT32 RELAY_COMPRESSOR					= 1;
const UINT32 RELAY_CAMERA_LED					= 2;
const UINT32 RELAY_BLING						= 3;

const UINT32 ANALOG_PRESSURE_SENSOR				= 1;
const UINT32 ANALOG_RANGE_FINDER				= 2;

const float DRV_DIST_PER_PULSE					= 1.0;			//Todo: Change this to the correct value
const float AUTONOMOUS_DRIVE_BASE_SPEED			= 0.5;  		//Todo: Tweak this and the P constant to run smoothly
const float AUTONOMOUS_DRIVE_P_CONSTANT			= 0.05;
const float AUTONOMOUS_DRIVE_TIME				= 0.75;			//Todo: Set this to a reasonable time
const float AUTONOMOUS_SPEED					= 0.85;

const float LOADER_MOTOR_SPEED					= 1.0;
const float LOADER_MOTOR_REVERSE_SPEED			= -1.0;
const float LOADER_EXTENSION_TIME				= 0.5;
const float LOADER_PULL_BALL_TIME				= 0.5;
const float AUTONOMOUS_LOAD_TIME				= 0.5;			//Todo: Set this to a reasonable amount
const float LOADER_RUN_AFTER_RETRACT			= 0.0;
const float LOADER_FUNNELS_DEPLOYMENT_WAIT_TIME = 0.5;
const float BALL_WAIT_FOR_SETTLE				= 0.0;
const float LOADER_WAIT_BEFORE_CHECK_PROXIMITY	= 1.0;

const float PNEUMATICS_PRESSURE_VOLTAGE_B		= 1.008;
const float PNEUMATICS_PRESSURE_VOLTAGE_M		= 63.344;

const float SHOOTER_MOTOR_SPEED					= 0.75;			//Todo: Set to a good amount
const float SHOOTER_MOTOR_REVERSE_SPEED			= -1.0;			//Todo: Flip Reverse and pullback
const float SHOOTER_MOTOR_DISENGAGE_SPEED		= 0.25;
const float SHOOTER_PULLBACK_SLOW_SPEED			= 1.0;
const float SHOOTER_PULLBACK_LONG_BEFORE_SLOW	= 2.9;
const float SHOOTER_PULLBACK_SHORT_BEFORE_SLOW	= 2.4;
const float SHOOTER_SHOOT_TIME					= 1.0;			//Todo: Set to actual value
const float SHOOTER_WAIT_FOR_LATCH				= 0.02;			//How long the latch must be disengaged for the wait to be acknowledged
const float SHOOTER_WAIT_BEFORE_STOP			= 0.25;
const float SHOOTER_WAIT_FOR_FULL_SPEED			= 0.375;
const float SHOOTER_PULLBACK_TIMEOUT			= 7.0;
const float SHOOTER_DISENGAGE_TIMEOUT			= 0.5;
const float RANGE_FINDER_VOLTS_PER_INCH			= 5.0 / 512.0;
const float RANGE_FINDER_VOLTS_PER_FOOT			= RANGE_FINDER_VOLTS_PER_INCH * 12.0;
const float HOT_GOAL_CHANGE_TIME				= 4.0;

const float DRIVE_MOTORS_SCALE					= 0.8;

const float MOTOR_STOPPED_TOLERANCE				= 0.05;

const float KINECT_HOT_GOAL_THRESHOLD			= 0.5;
const float AUTONOMOUS_WAIT_AFTER_DEPLOYMENT	= HOT_GOAL_CHANGE_TIME - BALL_WAIT_FOR_SETTLE - LOADER_EXTENSION_TIME - LOADER_FUNNELS_DEPLOYMENT_WAIT_TIME;
const float AUTONOMOUS_TIME_BEFORE_DRIVE		= 9.0;
const float LOOK_FOR_KINECT_TIME				= 1.0;
const float AUTONOMOUS_TURN_SPEED				= 0.7;
const float AUTONOMOUS_TURN_TIME				= 0.5;
const float AUTONOMOUS_TURN_TWO_LONG_SPEED		= 1.0;
const float AUTONOMOUS_TURN_TWO_SHORT_SPEED		= 0.5;
const float AUTONOMOUS_TURN_TWO_TIME			= 0.5;

const bool SAFETY_ENABLED						= false;

#endif
