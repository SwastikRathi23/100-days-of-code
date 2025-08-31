//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>

int main(){

    float celsius, fahrenheit;

    printf("enetr temerature in celsius\n");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("temp in fahrenhite is %f\n", fahrenheit);

    return 0;


}

