#pragma config(Motor,  port2,           rightMotor,    tmotorNone, openLoop)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
  Project Title: Servo Motor Rotation
  Team Members: Raymond Metzger, Ryan Potter, Robbie Vannucchi, Nick Franzwa
  Date: 2/1/19
  Section: A3_1_2 Part 4


  Task Description:
Rotate the servo motor all the way through 5 intervals.

  Pseudocode:
Rotate servo motor to -127
wait
Rotate servo motor to -63
wait
Rotate servo motor to 0
wait
Rotate servo motor to 63
wait
Rotate servo motor to 127
*/

task main()
{                                     //Program begins, insert code within curly braces

setServo(servoMotor, -127); // rotate servo motor to -127
wait(2); // wait 2 seconds
setServo(servoMotor, -63); // rotate servo motor to -63
wait(3); // wait 3 seconds
setServo(servoMotor, 0); // rotate servo motor to 0
wait(2); // wait 2 seconds
setServo(servoMotor, 63); // rotate servo motor to 63
wait(3); // wait 3 seconds
setServo(servoMotor, 127); // rotate servo motor to 127
wait(2); // wait 2 seconds
//rotates the motor completely through 5 intervals over 12 seconds


}
