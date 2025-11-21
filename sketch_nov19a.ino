#include <Braccio.h>
#include <Servo.h>
Servo base;
Servo shoulder;
Servo elbow;
Servo wrist_ver;
Servo wrist_rot;
Servo gripper;


void setup() {
  // put your setup code here, to run once:
Braccio.begin();
//Braccio.ServoMovement(0,       45, 90, 45, 45, 45, 73);

}

void loop() {
Braccio.ServoMovement(20,     75, 85, 0, 0, 90, 73);
delay(1000);
Braccio.ServoMovement(20,       75, 80, 0, 25, 90, 73);
delay(1000);
Braccio.ServoMovement(20,       55, 85, 0, 15, 90, 73);
delay(1000);

//Braccio.ServoMovement(20,       0, 24, 30, 120, 90, 73);
//delay(500);



}
