/*********** Global PlantBOT  Config ***********/
#include "Arduino.h"

#ifdef BOT1
    //hardware pins
    int motor1Pin = 9; //s0
    int motor2Pin = 10; //s1
    
    //down position
    int s1downspeed = 1386;
    int s2downspeed = 1430;

    //up position
    int s1upspeed = 1490;
    int s2upspeed = 1525;

    //stop position
    int s1stopspeed = 1440;
    int s2stopspeed = 1480;

    //throttle up
    int s1throttleupspeed = 1600;
    int s2throttleupspeed = 1600;

    //throttle down
    int s1throttledownspeed = 1300;
    int s2throttledownspeed = 1300;

    int light2 = A4; 
    int light3 = A2; //right
    int light1 = A1; //left

    bool isLight1On = false;
    bool isLight2On = false;
    bool isLight3On = false;
#endif

#ifdef BOT2
    //hardware pins
     int motor1Pin = 9; //s0
     int motor2Pin = 10; //s1
    
    //down position
      int s1downspeed = 1400;
      int s2downspeed = 1358;

    //up position
      int s1upspeed = 1525;
      int s2upspeed = 1493;

    //stop position
      int s1stopspeed = 1460;
      int s2stopspeed = 1410;

    //throttle up
      int s1throttleupspeed = 1600;
      int s2throttleupspeed = 1600;

    //throttle down
      int s1throttledownspeed = 1300;
      int s2throttledownspeed = 1300;

      int light2 = A2;
      int light3 = A4;
      int light1 = A3;

      bool isLight1On = false;
      bool isLight2On = false;
      bool isLight3On = false;
#endif

#ifdef BOT3
    //hardware pins
      int motor1Pin = 9; //s0
      int motor2Pin = 10; //s1
    
    //down position
      int s1downspeed = 1450;
      int s2downspeed = 1425;

    //up position
      int s1upspeed = 1570;
      int s2upspeed = 1528;

    //stop position
      int s1stopspeed = 1507;
      int s2stopspeed = 1480;

    //throttle up
      int s1throttleupspeed = 1600;
      int s2throttleupspeed = 1600;

    //throttle down
      int s1throttledownspeed = 1300;
      int s2throttledownspeed = 1300;

      int light2 = A2;
      int light3 = A4;
      int light1 = A3;

      bool isLight1On = false;
      bool isLight2On = false;
      bool isLight3On = false;
#endif

#ifdef BOT4
    //hardware pins
      int motor1Pin = 9; //s0
      int motor2Pin = 10; //s1
      
    //down position
      int s1downspeed = 1420;
      int s2downspeed = 1430;

    //up position
      int s1upspeed = 1525;
      int s2upspeed = 1535;

    //  stop position
      int s1stopspeed = 1470;
      int s2stopspeed = 1480;

    //throttle up
      int s1throttleupspeed = 1600;
      int s2throttleupspeed = 1600;

    //throttle down
      int s1throttledownspeed = 1300;
      int s2throttledownspeed = 1300;

      
      int light1 = A4;
      int light2 = A3;
      int light3 = A1;
      int light4 = A2;

      bool isLight1On = false;
      bool isLight2On = false;
      bool isLight3On = false;
      bool isLight4On = false;
#endif
