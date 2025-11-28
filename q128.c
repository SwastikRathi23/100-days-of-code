/*
Q128: Read a text file and count how many vowels and consonants are in the file.
Ignore digits and special characters.
*/

#include <stdio.h>

int main() {
    FILE *file = fopen("text.txt", "r");
    if (file == NULL) {
        return 0;
    }

    char c;
    int vowels = 0, consonants = 0;

    while ((c = fgetc(file)) != EOF) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            char lower = (c >= 'A' && c <= 'Z') ? c + 32 : c;
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(file);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
