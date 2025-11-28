/*
Q118: Write a program to take an input array of size n.
The array contains all integers from 0 to n except one.
Print the missing number.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int total = n * (n + 1) / 2;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("%d", total - sum);
    return 0;
}
