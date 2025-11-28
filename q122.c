/*
Q122: Write a C program that opens an existing file (e.g., info.txt) 
and reads its contents using fgets(). Print all lines to the console until EOF.
*/

#include <stdio.h>

int main() {
    FILE *file = fopen("info.txt", "r");
    if (file == NULL) {
        return 0;
    }

    char line[1000];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}
