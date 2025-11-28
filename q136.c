/*
Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
*/

#include <stdio.h>
#include <string.h>

int main() {
    enum Menu {ADD, SUBTRACT, MULTIPLY};
    char choice[10];
    int a, b;

    scanf("%s %d %d", choice, &a, &b);

    enum Menu op;
    if (strcmp(choice, "ADD") == 0) op = ADD;
    else if (strcmp(choice, "SUBTRACT") == 0) op = SUBTRACT;
    else op = MULTIPLY;

    switch(op) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}
