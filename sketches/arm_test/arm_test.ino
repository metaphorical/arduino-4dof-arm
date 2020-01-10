#include <Servo.h>

#define ledPin 11


Servo motor1, motor2, motor3, motor4;

int motor1_position = 100;

int motor2_position = 180;

int motor3_position = 75;

// Go between 75 and 250
int motor4_position = 75;

void setup() {
  // Rotation
  motor1.attach (9);
//
//  // Left motor
  motor2.attach (8);
//
//  // Right motor
  motor3.attach (7);
//
//  // Hand motor
  motor4.attach (6);

  //Direct output to status led
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  motor1.write(motor1_position);
  motor2.write(motor2_position);
  motor3.write(motor3_position);
  motor4.write(motor4_position);
  
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);

    motor1.write(100);
    motor2.write(200);
    motor3.write(100);
    motor4.write(75);
    delay(1000);
//    motor1.write(100);
//    motor2.write(120);
//    motor3.write(120);
//    motor4.write(80);
//    delay(1000);
//    motor4.write(50);
//    delay(1000);
//    motor1.write(100);
//    motor2.write(200);
//    delay(1000);
//    motor3.write(100);
//    delay(1000);
//    motor3.write(90);

}
