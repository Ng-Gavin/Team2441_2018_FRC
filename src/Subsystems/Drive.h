#ifndef Drive_H
#define Drive_H

#include "RobotMap.h"
#include <Commands/Subsystem.h>
#include <Spark.h>

class Drive: public Subsystem {
private:
	/// Back left motor of drive system.
	frc::Spark back_left { LEFT_BACK_DRIVE_PORT };

	/// Back right motor of the drive system.
	frc::Spark back_right { RIGHT_BACK_DRIVE_PORT };

	/// Front left motor of the drive system.
	frc::Spark front_left { LEFT_FRONT_DRIVE_PORT };

	/// Front right motor of the drive system.
	frc::Spark front_right { RIGHT_FRONT_DRIVE_PORT };

public:
	void start_left_motors(int speed);
	void start_right_motors(int speed);

	void InitDefaultCommand();
};

#endif  // Drive_H
