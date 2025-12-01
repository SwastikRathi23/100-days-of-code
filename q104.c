//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    long long total = (long long)n * (n + 1) / 2;  
    long long x2 = total;

    long long x = 1;
    while (x * x < x2) {
        x++;
    }

    if (x * x == x2) {
        printf("%lld\n", x);   
    } else {
        printf("-1\n");       
    }

    return 0;
}