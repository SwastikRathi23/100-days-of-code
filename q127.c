/*
Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase,
and writes the result to output.txt.
*/

#include <stdio.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    if (in == NULL) {
        return 0;
    }

    FILE *out = fopen("output.txt", "w");
    if (out == NULL) {
        fclose(in);
        return 0;
    }

    char c;
    while ((c = fgetc(in)) != EOF) {
        if (c >= 'a' && c <= 'z')
            c = c - 32;
        fputc(c, out);
    }

    fclose(in);
    fclose(out);
    return 0;
}
