//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>

int main() {
    int n, x, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int left = 0, right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] >= x) {
            result = mid;     
            right = mid - 1;  
        } 
        else {
            left = mid + 1;   
        }
    }

    printf("Ceil Index: %d\n", result);

    return 0;
}