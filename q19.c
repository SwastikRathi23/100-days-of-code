//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>

int main(){

    int a, b, c;
    printf("enter sides of triangle");
    scanf("%d %d %d",&a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {

        if (a == b && b == c) {
            printf("Equilateral\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Isosceles\n");
        }
        else {
            printf("Scalene\n");
        }
    } else {
        printf("Invalid triangle\n");
    }

    return 0;
    
}