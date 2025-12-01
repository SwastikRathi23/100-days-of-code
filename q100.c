//Print all sub-strings of a string.
#include <stdio.h>

int main() {
    char str[100];
    int i, j, k;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    int n = i; 

    printf("All substrings of the string:\n");

   
    for(i = 0; i < n; i++) {       
        for(j = i; j < n; j++) {   
            for(k = i; k <= j; k++) {  
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}