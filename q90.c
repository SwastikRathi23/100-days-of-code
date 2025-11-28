//Toggle case of each character in a string.
#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {
            str[i] = ch - ('a' - 'A');   
        }
    
        else if (ch >= 'A' && ch <= 'Z') {
            str[i] = ch + ('a' - 'A');   
        }

        i++;
    }

    printf("Toggled string: %s", str);

    return 0;
}