/*
Q130: Store multiple student records (name, roll number, marks) into a file using fprintf().
Then read them using fscanf() and display each record.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char name[100];
    int roll, marks;

    FILE *file = fopen("students.txt", "w");
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(file, "%s %d %d\n", name, roll, marks);
    }
    fclose(file);

    file = fopen("students.txt", "r");
    for (int i = 0; i < n; i++) {
        fscanf(file, "%s %d %d", name, &roll, &marks);
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }
    fclose(file);

    return 0;
}
