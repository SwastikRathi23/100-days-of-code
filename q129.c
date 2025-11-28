/*
Q129: A file numbers.txt contains a list of integers separated by spaces.
Read all integers, compute their sum and average, and print both.
*/

#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        return 0;
    }

    int num, sum = 0, count = 0;
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(file);

    printf("Sum = %d\n", sum);
    if (count > 0)
        printf("Average = %.2f\n", (float)sum / count);
    else
        printf("Average = 0.00\n");

    return 0;
}
