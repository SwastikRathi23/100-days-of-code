/*
Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
*/

#include <stdio.h>
#include <string.h>

int main() {
    enum Status {SUCCESS, FAILURE, TIMEOUT};
    char input[10];
    scanf("%s", input);

    enum Status st;
    if (strcmp(input, "SUCCESS") == 0) st = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0) st = FAILURE;
    else st = TIMEOUT;

    if (st == SUCCESS) printf("Operation successful\n");
    else if (st == FAILURE) printf("Operation failed\n");
    else printf("Operation timed out\n");

    return 0;
}
