#include "RCSwitch.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int PIN = 0; // siehe wiring Pi Belegung

    int fls100[5][5][2];


    // Power ON
    fls100[1][1][1] = 1381717;
    fls100[1][2][1] = 1394005;
    fls100[1][3][1] = 1397077;
    fls100[1][4][1] = 1397845;

    fls100[2][1][1] = 4527445;
    fls100[2][2][1] = 4539733;
    fls100[2][3][1] = 4542805;
    fls100[2][4][1] = 4543573;

    fls100[3][1][1] = 5313877;
    fls100[3][2][1] = 5326165;
    fls100[3][3][1] = 5329237;
    fls100[3][4][1] = 5330005;

    fls100[4][1][1] = 5510485;
    fls100[4][2][1] = 5522773;
    fls100[4][3][1] = 5525845;
    fls100[4][4][1] = 5526613;


    // Power OFF
    fls100[1][1][0] = 1381716;
    fls100[1][2][0] = 1394004;
    fls100[1][3][0] = 1397076;
    fls100[1][4][0] = 1397844;

    fls100[2][1][0] = 4527444;
    fls100[2][2][0] = 4539732;
    fls100[2][3][0] = 4542804;
    fls100[2][4][0] = 4543572;

    fls100[3][1][0] = 5313876;
    fls100[3][2][0] = 5326164;
    fls100[3][3][0] = 5329236;
    fls100[3][4][0] = 5330004;

    fls100[4][1][0] = 5510484;
    fls100[4][2][0] = 5522772;
    fls100[4][3][0] = 5525844;
    fls100[4][4][0] = 5526612;

    int UEBERGABE1=atoi(argv[1]);
    int UEBERGABE2=atoi(argv[2]);
    int UEBERGABE3=atoi(argv[3]);

/**
    printf ("Para 1: %d\nPara 2: %d\nPara 3: %d\n\n", UEBERGABE1,UEBERGABE2,UEBERGABE3 );
**/

    if (wiringPiSetup() == -1) return 1;

    RCSwitch mySwitch = RCSwitch();
    mySwitch.enableTransmit(PIN);

    mySwitch.send(fls100[UEBERGABE1][UEBERGABE2][UEBERGABE3], 24);

    return 0;
}
