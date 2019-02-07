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
Project Title: Prepare to die heathens
Team Members: Raymond Metzger, Ryan Potter, Robbie Vannucchi, Nick Franzwa
Date: 2/1/19
Section: A3_1_3 Part 1


Task Description: Using the potentiometer


Pseudocode:
-turn on LED
-wait until a potentiometer reading of 2048
-turn off LED
-start the motor
-wait 3.5 sec
-stop the motor

*/

task main()
{                                     //Program begins, insert code within curly braces

	turnLEDOn(red);
	//untilPotentiometerGreaterThan(2048, potentiometer);
	while(true){
		if(SensorValue(potentiometer) >= 2048){
			turnLEDOff(red);
			startMotor(leftMotor, 63);
			wait(0.5);
			stopMotor(leftMotor);
		}
	}

}
