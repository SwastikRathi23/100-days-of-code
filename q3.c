//Q3 : Write a program to calculate the area and perimeter of a rectangle given its length and breadth.



#include<stdio.h>

int main(){

float length, breadth, area, perimeter;

printf("enter length and breadth of rectangle");
scanf("%f %f", &length, &breadth);


perimeter = 2 * (length + breadth);
area = (length * breadth);

printf("area and perimeter of rectangle are :\n");
printf("perimeter=%f, area=%f\n", perimeter, area);

return 0;

}
