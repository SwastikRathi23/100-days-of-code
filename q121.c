/*
Q121: Write a C program that creates a text file named info.txt in write mode.
The program should take the user's name and age as input, and write them using fprintf().
After writing, display a confirmation message.
*/

#include <stdio.h>

int main() {
    char name[100];
    int age;

    scanf("%s", name);
    scanf("%d", &age);

    FILE *file = fopen("info.txt", "w");

    if (file == NULL) {
        return 0;
    }

    fprintf(file, "Name: %s\nAge: %d\n", name, age);
    fclose(file);

    printf("File created successfully! Data written to info.txt");
    return 0;
}
