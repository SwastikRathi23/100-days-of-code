//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
#define PI 3.14



int main(){
 float radius, area, circumference;

printf("enter radius of circle");
scanf("%f", &radius);

area = PI * radius *radius;

circumference = 2 * PI * radius;

printf("Area=%f, Circumference=%f\n", area, circumference);

}