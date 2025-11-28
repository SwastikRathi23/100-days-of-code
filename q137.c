/*
Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
*/

#include <stdio.h>
#include <string.h>

int main() {
    enum Role {ADMIN, USER, GUEST};
    char input[10];
    scanf("%s", input);

    enum Role role;
    if (strcmp(input, "ADMIN") == 0) role = ADMIN;
    else if (strcmp(input, "USER") == 0) role = USER;
    else role = GUEST;

    if (role == ADMIN) printf("Welcome Admin!\n");
    else if (role == USER) printf("Welcome User!\n");
    else printf("Welcome Guest!\n");

    return 0;
}
