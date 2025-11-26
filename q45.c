//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
   int n;
    double sum = 0.0;
    int numerator, denominator;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    numerator = 2;
    denominator = 3;

    for (int i = 0; i < n; i++) {
        sum += (double)numerator / denominator;

        numerator += 2;
        denominator += 4;
    }

    printf("Sum of the series up to %d terms is: %.4lf\n", n, sum);

    return 0;
}