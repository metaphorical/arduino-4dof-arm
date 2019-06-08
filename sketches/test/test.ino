#include <Servo.h>

Servo motor1, motor2, motor3, motor4;

//  Start position of motor 1 is 100, + is left - is right
int motor1_position = 100;

int motor2_position = 100;

int motor3_position = 120;

int servo_position = 75;

// Go between 75 and 250
int motor4_position = 69;

void setup() {

//Rotation
  motor1.attach (9);
  motor1.write(motor1_position);

// Left motor
//  motor2.attach (8);
//  motor2.write(motor2_position);s

//Right motor
//  motor3.attach (7);
//  motor3.write(motor3_position);

//Hand motor
  motor4.attach (6);
  motor4.write(60);
//
//  delay(500);
//
//  motor4.write(90);
//
//  delay(500);
//
//  motor4.write(60);
//
//  delay(500);
//
//  motor4.write(90);

}

void loop() {

//  for (servo_position = 75; servo_position <=200; servo_position +=1){
//    motor4.write(servo_position);
//    delay(10);
//  }
//
//  for (servo_position=200; servo_position >= 75; servo_position -=1){
//
//    motor4.write(servo_position);
//    delay(10);
//  }
}
