/*
Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
*/

#include <stdio.h>

int main() {
    enum TrafficLight {RED, YELLOW, GREEN};
    char input[10];
    scanf("%s", input);

    enum TrafficLight light;
    if (input[0] == 'R') light = RED;
    else if (input[0] == 'Y') light = YELLOW;
    else light = GREEN;

    if (light == RED) printf("Stop\n");
    else if (light == YELLOW) printf("Wait\n");
    else printf("Go\n");

    return 0;
}
