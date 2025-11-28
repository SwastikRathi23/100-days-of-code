/*
Q124: Take two filenames from the user – a source file and a destination file.
Copy all the content from the source file to the destination file using fgetc() and fputc().
*/

#include <stdio.h>

int main() {
    char source[100], destination[100];
    scanf("%s", source);
    scanf("%s", destination);

    FILE *src = fopen(source, "r");
    if (src == NULL) {
        return 0;
    }

    FILE *dest = fopen(destination, "w");
    if (dest == NULL) {
        fclose(src);
        return 0;
    }

    char c;
    while ((c = fgetc(src)) != EOF) {
        fputc(c, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s", destination);
    return 0;
}
