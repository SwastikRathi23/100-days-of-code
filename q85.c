//Reverse a string.
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, j, temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        i++;
    }

    if (i > 0 && str[i-1] == '\n') {
        str[i-1] = '\0';
        i--;
    }

    j = i - 1;      
    int start = 0;

    while (start < j) {
        temp = str[start];
        str[start] = str[j];
        str[j] = temp;

        start++;
        j--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}