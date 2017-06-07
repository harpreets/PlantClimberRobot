/*********** Global PlantBOT  Controller ***********/
    /***********       hsareen .   ***********/

#define BOT1 1

#include "PlantClimberConfig.h"
#include <Servo.h>


Servo s[2];
int s1speed;
int s2speed;

int incomingSerialByte = 0;

void setup() {
  Serial.begin(9600);

  //Servo INIT
  s[0].attach(motor1Pin); //servo 1-s1
  s[1].attach(motor2Pin); //servo 2-s2

  s1speed = s1stopspeed;
  s2speed = s2stopspeed;

  //Light INIT
  pinMode(light1, OUTPUT); //left light with motor1/s1 in front
  pinMode(light2, OUTPUT); //middle light with motor1/s1 in front
  pinMode(light3, OUTPUT); //right light with motor1/s1 in front
  
  #ifdef BOT4
  pinMode(light4, OUTPUT);
  #endif

  turnAllLightsOff();
}

void turnAllLightsOff(){
  digitalWrite(light1, LOW);
  digitalWrite(light2, LOW);
  digitalWrite(light3, LOW);
  
  #ifdef BOT4
  digitalWrite(light4, LOW);
  #endif
}

void loop() {
  if (Serial.available() > 0) {
    incomingSerialByte = Serial.read();
    
    //select the robot state
    //w,s,q,a,x
    if(incomingSerialByte == 'w'){
      //move up slow speed
      s1speed = s1upspeed;
      s2speed = s2upspeed;
      Serial.println(s1speed);
      Serial.println(s2speed);
    }else if(incomingSerialByte == 's'){
      //move down slow speed
      s1speed = s1downspeed;
      s2speed = s2downspeed;
      Serial.println(s1speed);
      Serial.println(s2speed);
    }else if(incomingSerialByte == 'q'){
      //move up throttle
      s1speed = s1throttleupspeed;
      s2speed = s2throttleupspeed;
      Serial.println(s1speed);
      Serial.println(s2speed);
    }else if(incomingSerialByte == 'a'){
      //move down throttle
      s1speed = s1throttledownspeed;
      s2speed = s2throttledownspeed;
      Serial.println(s1speed);
      Serial.println(s2speed);
    }else if(incomingSerialByte == 'x'){
      //stop movement
      s1speed = s1stopspeed;
      s2speed = s2stopspeed;
      Serial.println(s1speed);
      Serial.println(s2speed);
    }

    Serial.println(incomingSerialByte);
    
    //select and toggle the light (1,2,3,4) state
    if(incomingSerialByte == '1'){
      if(isLight1On){
        digitalWrite(light1, LOW);
        Serial.println("Light 1 off");
      }else{
        digitalWrite(light1, HIGH);
        Serial.println("Light 1 on");
      }
      isLight1On = !isLight1On;
    }else if(incomingSerialByte == '2'){
      if(isLight2On){
        digitalWrite(light2, LOW);
        Serial.println("Light 2 off");
      }else{
        digitalWrite(light2, HIGH);
        Serial.println("Light 2 on");
      }
      isLight2On = !isLight2On;      
    }else if(incomingSerialByte == '3'){
      if(isLight3On){
        digitalWrite(light3, LOW);
        Serial.println("Light 3 off");
      }else{
        digitalWrite(light3, HIGH);
        Serial.println("Light 3 on");
      }
      isLight3On = !isLight3On;      
    }else if(incomingSerialByte == '4'){
      #ifdef BOT4
      if(isLight4On){
        digitalWrite(light4, LOW);
        Serial.println("Light 4 off");
      }else{
        digitalWrite(light4, HIGH);
        Serial.println("Light 4 on");
      }
      isLight4On = !isLight4On;
      #endif
    }else if(incomingSerialByte == '5'){
      turnAllLightsOff();
    }
  }

  s[0].writeMicroseconds(s1speed);
  s[1].writeMicroseconds(s2speed );
  delay(30);
}
