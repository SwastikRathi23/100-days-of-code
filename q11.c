//q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main() {
    int num;

    printf("enter a number");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }

    return 0;
}
