#include "robot.hpp"

/*
 * Talon IDs
 * 39
 * 42
 * 6
 * 40
 */
void Robot::RobotInit() {
	left_joystick = new frc::Joystick(3);
	right_joystick = new frc::Joystick(2);
	front_left = new CANTalon(39);
	back_left = new CANTalon(42);
	front_right = new CANTalon(6);
	back_right = new CANTalon(40);
}

void Robot::DisabledInit() {
	setMotors(0, 0);
}

void Robot::TeleopInit() {

}

void Robot::TeleopPeriodic() {
	float leftSpeed = left_joystick->GetY();
	float rightSpeed = right_joystick->GetY();
	setMotors(leftSpeed, rightSpeed);
}

void Robot::setMotors(float leftSpeed, float rightSpeed) {
	leftSpeed *= -0.25;
	front_left->Set(leftSpeed);
	back_left->Set(leftSpeed);
	rightSpeed *= 0.25;
	front_right->Set(rightSpeed);
	back_right->Set(rightSpeed);
}

/**
 *
 */
START_ROBOT_CLASS(Robot)



