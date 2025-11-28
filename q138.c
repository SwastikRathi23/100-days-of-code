/*
Q138: Print all enum names and integer values using a loop.
*/

#include <stdio.h>

int main() {
    enum Colors {RED, YELLOW, GREEN};
    char *names[] = {"RED", "YELLOW", "GREEN"};

    for (int i = 0; i <= GREEN; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}
