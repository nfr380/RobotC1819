#pragma config(Motor,  port2,           rightMotor,    tmotorNone, openLoop)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
  Project Title: Output Output Output
  Team Members: Raymond Metzger, Ryan Potter, Robbie Vannucchi, Nick Franzwa
  Date: 2/1/19
  Section: A3_1_2 Part 4


  Task Description:


  Pseudocode:

*/

task main()
{                                     //Program begins, insert code within curly braces

setServo(servoMotor, -127);
wait(2);
setServo(servoMotor, -63);
wait(3);
setServo(servoMotor, 0);
wait(2);
setServo(servoMotor, 63);
wait(3);
setServo(servoMotor, 127);
wait(2);
//rotates the motor completely through 5 intervals over 12 seconds


}
