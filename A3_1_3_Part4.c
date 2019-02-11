#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in3,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl3,  quad,           sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  sonar,          sensorSONAR_inch)
#pragma config(Sensor, dgtl12, red,            sensorLEDtoVCC)
#pragma config(Motor,  port1,           flashlight,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)
/*
Project Title: Using Optical Shaft Encoder
Team Members: Raymond Metzger, Ryan Potter, Robbie Vannucchi, Nick Franzwa
Date: 2/1/19
Section: A3_1_3 Part 4


Task Description: Using Optical Shaft Encoder


Pseudocode:
start both motors at half speed
stop motors when encoder counts 480
start motors at half speed counter clockwise
stop both motors when encoder counts 1260
*/

task main()
{                                     //Program begins, insert code within curly braces

	startMotor(leftMotor, 63); // start left motor at half speed
	startMotor(rightMotor, 63); // start right motor at half speed
	untilEncoderCounts(480,quad); // when encoder counts 480;
	stopMotor(leftMotor); // stop left motor
	stopMotor(rightMotor); // stop right motor
	startMotor(leftMotor, -63); // start left motor at half speed counter clockwise
	startMotor(rightMotor, -63); // start right motor at half speed counter clockwise
	untilEncoderCounts(1260,quad); // when encoder counts 1260;
	stopMotor(leftMotor); // stop left motor
	stopMotor(rightMotor); // stop right motor

}
