//q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h> 

int main() {
    float principal, rate, time;
    float SI, CI;

    printf("enter principal, rate and time");
    scanf("%f %f %f", &principal, &rate, &time);

    SI = (principal * rate * time) / 100;

    CI = principal * (pow((1 + rate / 100), time)) - principal;

    printf("Simple Interest=%f, Compound Interest=%f\n", SI, CI);

    return 0;
}
