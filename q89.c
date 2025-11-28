//Count frequency of a given character in a string.
#include <stdio.h>

int main() {
    char str[200];
    char ch;
    int i = 0, freq = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to find frequency: ");
    scanf("%c", &ch);

    while (str[i] != '\0') {
        if (str[i] == ch) {
            freq++;
        }
        i++;
    }

    printf("Frequency of '%c' = %d\n", ch, freq);

    return 0;
}