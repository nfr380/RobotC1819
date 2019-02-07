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
Project Title: Using line follower
Team Members: Raymond Metzger, Ryan Potter, Robbie Vannucchi, Nick Franzwa
Date: 2/1/19
Section: A3_1_3 Part 1


Task Description: Using line follower


Pseudocode:

*/

task main()
{                                     //Program begins, insert code within curly braces
	while(true){
		setServo(servoMotor, 127);
		untilLight(1330, lineFollower);
		setServo(servoMotor, -127);
		wait(2);
	}


}
