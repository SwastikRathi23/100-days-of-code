//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int hasOdd = 0;  

    printf("Enter an integer: ");
    scanf("%d", &num);

    int originalNum = num;

    while (num != 0) {
        digit = num % 10;   
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;   
    }

    if (hasOdd)
        printf("Product of odd digits of %d is: %d\n", originalNum, product);
    else
        printf("No odd digits found in %d.\n", originalNum);

    return 0;
}