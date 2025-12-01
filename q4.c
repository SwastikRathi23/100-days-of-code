//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
#include<math.h>

int main(){
 float radius, area, circumference;

printf("enter radius of circle");
scanf("%f", &radius);

area = M_PI * radius *radius;

circumference = 2 * M_PI * radius;

printf("Area=%f, Circumference=%f\n", area, circumference);

}