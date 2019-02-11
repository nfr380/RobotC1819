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
Project Title: JohnWatson, Our Lord and Savior
Team Members: Raymond Metzger, Ryan Potter, Robbie Vannucchi, Nick Franzwa, JohnWatson
Date: 2/11/19
Section: A3_1_4 Part 3


Task Description: Ultrasonic Distance Sensor


Pseudocode:

*/

task main()
{                                     //Program begins, insert code within curly braces
	while(true){
		if(SensorValue(bumpSwitch) == 1){
				turnLEDOn(red);
				wait(2);
				turnLEDOff(red);
				wait(2);
		}
	}


}
