/*
Q140: Define a struct with enum Gender and print person's gender.
*/

#include <stdio.h>
#include <string.h>

int main() {
    enum Gender {MALE, FEMALE};
    struct Person {
        enum Gender gender;
    };

    char input[10];
    scanf("%s", input);

    struct Person p;
    if (strcmp(input, "MALE") == 0) p.gender = MALE;
    else p.gender = FEMALE;

    if (p.gender == MALE) printf("Male\n");
    else printf("Female\n");

    return 0;
}
