#pragma once

/*
 * This is the main header file for the robot.
 * Here we declare any functions and variables we use in our code
 */

// Include the headers for the CANTalons and WPILib
#include <ctrlib/CANTalon.h>
#include <WPILib.h>

/**
 * Our main robot class
 */
class Robot : public frc::IterativeRobot {
public:
	void RobotInit() override;
	void DisabledInit() override;
	void AutonomousInit() override {}
	void TeleopInit() override;
	void TestInit() override {}
	void DisabledPeriodic() override {}
	void AutonomousPeriodic() override {}
	void TeleopPeriodic() override;
	void TestPeriodic() override {}
private:
	frc::Joystick	*left_joystick,
					*right_joystick;
	CANTalon	*front_left,
				*back_left,
				*front_right,
				*back_right;
	void setMotors(float leftSpeed, float rightSpeed);
};
