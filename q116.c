/*
Q116: Write a program to take an integer array nums of positive integers and an integer target.
Find two distinct indices i and j such that nums[i] + nums[j] = target.
Assume exactly one solution exists. Print the indices separated by a space.
If no solution exists, print "-1 -1".
*/

#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1");
    return 0;
}
