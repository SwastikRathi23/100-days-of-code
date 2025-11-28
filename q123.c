/*
Q123: Read a text file and count the total number of characters, words, and lines.
A word is defined as a sequence of non-space characters separated by spaces or newlines.
*/

#include <stdio.h>

int main() {
    FILE *file = fopen("sample.txt", "r");
    if (file == NULL) {
        return 0;
    }

    int characters = 0, words = 0, lines = 0;
    char c, prev = ' ';

    while ((c = fgetc(file)) != EOF) {
        characters++;
        if (c == '\n') lines++;
        if ((c == ' ' || c == '\n' || c == '\t') && !(prev == ' ' || prev == '\n' || prev == '\t')) {
            words++;
        }
        prev = c;
    }

    if (!(prev == ' ' || prev == '\n' || prev == '\t') && characters > 0) {
        words++;
    }

    fclose(file);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
