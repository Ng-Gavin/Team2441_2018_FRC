#ifndef Ramp_H
#define Ramp_H

#include <Commands/Subsystem.h>
#include <DoubleSolenoid.h>
#include "RobotMap.h"
#include <Spark.h>
#include <Compressor.h>
#include <DigitalInput.h>
#include <PWMSpeedController.h>

class Ramp: public frc::Subsystem {
private:

	/// Motor for the winch to lower ramp.
	frc::Spark down_ramp { RAMP_WINCH_MOTOR };

	/// Motor for the CAM shaft to raise ramp.
	frc::Spark raise_ramp { CAM_SHAFT_MOTOR };

	//TODO: figure out speed.
	/// Speed of winch to lower the ramp.
	static constexpr float WINCH_SPEED = 1;

	/// Stops winch motor.
	static constexpr float WINCH_STOP = 0;

	//TODO: figure out speed.
	/// Speed of CAM shaft to raise the ramp.
	static constexpr float CAM_SPEED = 1;

	/// Stops CAM shaft motor..
	static constexpr float CAM_STOP = 0;

	frc::DigitalInput cam_switch { CAM_SHAFT_SWITCH };
public:
	Ramp();
	void start_winch_motor();
	void stop_winch_motor();
	void start_cam_motor();
	void stop_cam_motor();
	bool is_ramp_down();

	void InitDefaultCommand();
};

#endif  // Ramp_H
