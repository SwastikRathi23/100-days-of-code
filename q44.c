//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int numerator = 2 * i + 1;     
        int denominator = numerator + 1;
        sum += (double)numerator / denominator;
    }

    printf("Sum of the series up to %d terms is: %.4lf\n", n, sum);

    return 0;
}