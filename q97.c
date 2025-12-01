//Print the initials of a name.
#include <stdio.h>

int main() {
    char name[200];
    int i = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    if (name[0] != '\n' && name[0] != ' ') {
        if (name[0] >= 'a' && name[0] <= 'z') {
            printf("%c", name[0] - ('a' - 'A'));  
        } else {
            printf("%c", name[0]);
        }
    }

    
    while (name[i] != '\0') {
        
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != ' ') {
            char ch = name[i + 1];
            if (ch >= 'a' && ch <= 'z') {
                ch = ch - ('a' - 'A');  
            }
            printf("%c", ch);
        }
        i++;
    }

    printf("\n");
    return 0;
}