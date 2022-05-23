const {Board, Servo} = require("johnny-five");
const board = new Board();

board.on("ready", () => {``

const rotation = new Servo(9);  // Servo alternate constructor with options
const upperJoint = new Servo(8);  // Servo alternate constructor with options
const lowerJoint = new Servo(7);  // Servo alternate constructor with options
const hand = new Servo(6);  // Servo alternate constructor with options

  /*
  // var servo = new five.Servo({
  //   id: "MyServo",     // User defined id
  //   pin: 10,           // Which pin is it attached to?
  //   type: "standard",  // Default: "standard". Use "continuous" for continuous rotation servos
  //   range: [0,180],    // Default: 0-180
  //   fps: 100,          // Used to calculate rate of movement between positions
  //   invert: false,     // Invert all specified positions
  //   startAt: 90,       // Immediately move to a degree
  //   center: true,      // overrides startAt if true and moves the servo to the center of the range
  // });
  */

  // Add servo to REPL (optional)
  board.repl.inject({
    rotation, upperJoint, lowerJoint, hand
  });


  // Servo API

  // min()
  //
  // set the servo to the minimum degrees
  // defaults to 0
  //
  // eg. servo.min();

  // max()
  //
  // set the servo to the maximum degrees
  // defaults to 180
  //
  // eg. servo.max();

  // center()
  //
  // centers the servo to 90°
  //
  // servo.center();

  // to( deg )
  //
  // Moves the servo to position by degrees
  //
  // servo.to( 90 );

  // step( deg )
  //
  // step all servos by deg
  //
  // eg. array.step( -20 );

  // servo.sweep();


  rotation.to(100);
  upperJoint.to(100);
  lowerJoint.to(175);
  hand.to(75);
});