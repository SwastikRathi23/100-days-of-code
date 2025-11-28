/*
Q125: Open an existing file in append mode and allow the user to enter a new line of text.
Append the text at the end without overwriting existing content.
*/

#include <stdio.h>

int main() {
    char filename[100];
    scanf("%s", filename);

    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        return 0;
    }

    getchar(); // consume newline left by previous input

    char line[1000];
    fgets(line, sizeof(line), stdin);

    fprintf(file, "%s", line);
    fclose(file);

    printf("File updated successfully with appended text.");
    return 0;
}
