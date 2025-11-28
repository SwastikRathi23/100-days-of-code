//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    int num, digit;
    int freq[10] = {0};  

    printf("Enter an integer number: ");
    scanf("%d", &num);

    if (num < 0)
        num = -num;

    while (num != 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    int maxFreq = freq[0];
    int maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("The digit that occurs most frequently is: %d (occurs %d times)\n", maxDigit, maxFreq);

    return 0;
}