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


  // put your main code here, to run repeatedly:
                    //step delay M1 M2  M3  M4  M5  M6
                  //  if (val > 500){
Braccio.ServoMovement(0,       90, 90, 45, 45, 45, 30);

delay(1000);

                      Braccio.ServoMovement(0,       90, 90, 45, 45, 45, 70);
delay(500);
Braccio.ServoMovement(20,       90, 90, 45, 45, 90, 70);

delay(1000);
Braccio.ServoMovement(20,       90, 0, 65, 70, 90, 70);

delay(1000);
                    //}
}

