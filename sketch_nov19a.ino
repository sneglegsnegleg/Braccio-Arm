#include <Braccio.h>
#include <Servo.h>
Servo base;
Servo shoulder;
Servo elbow;
Servo wrist_ver;
Servo wrist_rot;
Servo gripper;


void setup() {
delay(500);
Braccio.begin();
//Braccio.ServoMovement(0,       45, 90, 45, 45, 45, 73);

}
int sAngle = 85;
int d = 500;
void loop() {
  /*
Braccio.ServoMovement(0,     75, sAngle + 5, 0, 90, 90, 73);
delay(d);
//begin first straight downwards line

Braccio.ServoMovement(0,     75, sAngle + 5, 0, 50, 90, 73);
delay(d);
Braccio.ServoMovement(0,     75, sAngle + 5, 0, 30, 90, 73);
delay(d);
Braccio.ServoMovement(0,     75, sAngle + 10, 0, 25, 90, 73);
delay(d);
//begin second horizontal line from bottom position of first line
Braccio.ServoMovement(0,     80, sAngle + 10, 0, 30, 90, 73);
delay(d);
Braccio.ServoMovement(0,     85, sAngle + 10, 0, 33, 90, 73);
delay(d);
Braccio.ServoMovement(0,     87, sAngle + 10, 0, 32, 90, 73);
delay(d);
Braccio.ServoMovement(0,     87, sAngle + 5, 90, 50, 90, 73);
delay(d);
//reset position above first line
Braccio.begin();

Braccio.ServoMovement(0,     75, sAngle, 0, 50, 90, 73);
delay(d);
Braccio.ServoMovement(0,     75, sAngle, 0, 50, 90, 73);
delay(d);
//begin third line from start point of first line
Braccio.ServoMovement(0,    80, sAngle + 2, 0, 50, 90, 73);
delay(d);
Braccio.ServoMovement(0,    85, sAngle -3, 0, 45, 90, 73);
delay(d);
//begin fourth line to finish a square
Braccio.ServoMovement(0,     85, sAngle + 5, 0, 40, 90, 73);
delay(d);
Braccio.ServoMovement(0,    87, sAngle + 10, 0, 29, 90, 73);
delay(d);
//
Braccio.ServoMovement(0,   90, sAngle + 30, 90, 50, 90, 73);

//A
Braccio.ServoMovement(0,     75, sAngle + 5, 0, 90, 90, 73);
delay(d);
//begin first straight downwards line

Braccio.ServoMovement(0,     75, sAngle + 5, 0, 50, 90, 73);
delay(d);
Braccio.ServoMovement(0,     75, sAngle + 5, 0, 30, 90, 73);
delay(d);
Braccio.ServoMovement(0,     75, sAngle + 10, 0, 25, 90, 73);
delay(d);
Braccio.ServoMovement(0,     75, sAngle + 30, 0, 90, 90, 73);
delay(d);
//begin second horizontal line from bottom position of first line
//reset position above first line
Braccio.begin();

Braccio.ServoMovement(0,     75, sAngle, 0, 50, 90, 73);
delay(d);
Braccio.ServoMovement(0,     75, sAngle, 0, 50, 90, 73);
delay(d);
//begin third line from start point of first line
Braccio.ServoMovement(0,    80, sAngle + 2, 0, 50, 90, 73);
delay(d);
Braccio.ServoMovement(0,    85, sAngle -3, 0, 45, 90, 73);
delay(d);
//begin fourth line to finish a square
Braccio.ServoMovement(0,     85, sAngle + 5, 0, 40, 90, 73);
delay(d);
Braccio.ServoMovement(0,    87, sAngle + 10, 0, 29, 90, 73);
delay(d);
//middle line
Braccio.ServoMovement(0,     85, sAngle + 5, 0, 40, 90, 73);
delay(d);
Braccio.ServoMovement(0,     60, sAngle + 5, 0, 40, 90, 73);
delay(d);
//
*/
while (1){

}
}

