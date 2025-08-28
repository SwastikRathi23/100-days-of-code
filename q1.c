//Q1: Write a program to input two numbers and display their sum.

#include<stdio.h>

int main(){

float num1, num2, sum;

printf("enter two numbers");
scanf("%f %f", &num1, &num2);

sum = num1 + num2;

printf("the sum of %f and %f is : %f\n", num1, num2, sum);

return 0;

}