
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
  Project Title: Bump Switch Motors
  Team Members: Raymond Metzger, Ryan Potter, Robbie Vannucchi, Nick Franzwa
  Date: 2/1/19
  Section: A3_1_3 Part 2


  Task Description: Turn on motors once bump switch pressed


  Pseudocode:
  when bump switch is pressed:
  start right motor at half speed
  start left motor at half speed
  wait 5 seconds
  stop motors
*/

task main()
{                                     //Program begins, insert code within curly braces

  untilBump(bumpSwitch); // when bump switch is pressed;
	startMotor(rightMotor, 63); // start right motor at half speed
	startMotor(leftMotor, 63); // start left motor at half speed
	wait(5); // wait 5 seconds
	stopMotor(rightMotor); // stop right motor

}
