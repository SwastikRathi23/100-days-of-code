//Print initials of a name with the surname displayed in full.
#include <stdio.h>

int main() {
    char name[200];
    int i = 0, lastSpace = -1;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    while (name[i] != '\0') {
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
        i++;
    }

    lastSpace = -1;
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    i = 0;
    while (i < lastSpace) {
       
        if (i == 0 && name[i] != ' ') {
            char ch = name[i];
            if (ch >= 'a' && ch <= 'z')
                ch = ch - ('a' - 'A'); 
            printf("%c ", ch);
        }
        else if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != ' ') {
            char ch = name[i + 1];
            if (ch >= 'a' && ch <= 'z')
                ch = ch - ('a' - 'A'); 
            printf("%c ", ch);
        }
        i++;
    }

    if (lastSpace != -1) {
        printf("%s", &name[lastSpace + 1]);
    }

    printf("\n");
    return 0;
}