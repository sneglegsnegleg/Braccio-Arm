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
  delay(1000);
Braccio.begin();
//Braccio.ServoMovement(0,       45, 90, 45, 45, 45, 73);

}
int d = 1000;
void loop() {
  
Braccio.ServoMovement(0,     75, 75, 0, 90, 90, 73);
delay(d);
//begin first straight downwards line

Braccio.ServoMovement(0,     75, 70, 0, 35, 90, 73);
delay(d);
Braccio.ServoMovement(0,     75, 75, 0, 30, 90, 73);
delay(d);
Braccio.ServoMovement(0,     75, 80, 0, 25, 90, 73);
delay(d);
//begin second horizontal line from bottom position of first line
Braccio.ServoMovement(0,     80, 80, 0, 30, 90, 73);
delay(d);
Braccio.ServoMovement(0,     85, 80, 0, 33, 90, 73);
delay(d);
Braccio.ServoMovement(0,     87, 80, 0, 32, 90, 73);
delay(d);
Braccio.ServoMovement(0,     90, 75, 90, 30, 90, 73);

//reset position above first line
Braccio.begin();

Braccio.ServoMovement(0,     75, 75, 0, 90, 90, 73);
delay(d);
Braccio.ServoMovement(0,     75, 70, 0, 45, 90, 73);
delay(d);
//begin third line from start point of first line
Braccio.ServoMovement(0,     80, 70, 0, 50, 90, 73);
delay(d);
Braccio.ServoMovement(0,     85, 67, 0, 45, 90, 73);
delay(d);
//begin fourth line to finish a square 
Braccio.ServoMovement(0,     77, 75, 0, 40, 90, 73);
delay(d);
Braccio.ServoMovement(0,     77, 80, 0, 29, 90, 73);
delay(d);
/*Braccio.ServoMovement(0,     75, 70, 0, 35, 90, 73);
delay(d);
Braccio.ServoMovement(0,     80, 75, 0, 35, 90, 73);
delay(d);
Braccio.ServoMovement(0,     80, 80, 0, 33, 90, 73);
delay(d);*/
Braccio.ServoMovement(0,     90, 100, 90, 45, 90, 73);
while (1) {

}


//Braccio.ServoMovement(20,       0, 24, 30, 120, 90, 73);
//delay(500);



}
