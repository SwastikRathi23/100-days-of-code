/*
Q120: Write a program to take a string input.
Change it to sentence case (capitalize the first letter of every word).
*/

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int capitalize = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (capitalize && str[i] != ' ') {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
            capitalize = 0;
        } else if (str[i] == ' ') {
            capitalize = 1;
        }
    }

    printf("%s", str);
    return 0;
}
