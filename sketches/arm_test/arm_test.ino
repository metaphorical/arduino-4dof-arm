#include <Servo.h>

#define ledPin 11


Servo rotation, upperJoint, lowerJoint, hand;

int rotation_position = 100; // 100 fwd, + left to 130, - right to 70

int upperJoint_position = 115; //155 max, min 115

int lowerJoint_position = 120; //110 or 120 vertical, 170 horisontal

// Go between 75 and 250
int hand_position = 70; // 

void setup() {
  // Rotation
  rotation.attach (9);
//
//  // Left motor
  upperJoint.attach (8);
//
//  // Right motor
  lowerJoint.attach (7);
//
//  // Hand motor
  hand.attach (6);

  //Direct output to status led
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  rotation.write(rotation_position);
  upperJoint.write(upperJoint_position);
  lowerJoint.write(lowerJoint_position);
  hand.write(hand_position);
  
}

void loop() {
}
