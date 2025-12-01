//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>

int main(){

float num1, num2, sum, diff, product, quotient;

printf("enter two numbers");
scanf("%f %f" , &num1, &num2);

sum = num1 + num2;
diff = num1 - num2;
product = num1 * num2;

if (num2 != 0) {   
        quotient = num1 / num2;  
    } else {
        printf("Division by zero is not allowed\n");
        return 1;
    }

    printf("sum=%f, diff=%f, product=%f, quotient=%f\n", sum, diff, product, quotient);

    return 0;

}