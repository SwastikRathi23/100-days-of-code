//Find the longest word in a sentence.
#include <stdio.h>

int main() {
    char str[300];
    char longest[100];
    int i = 0, j = 0, len = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (str[i] != ' ' && str[i] != '\n') {  
            
            len++;
        } else {
            
            if (len > maxLen) {
                maxLen = len;
                
                
                int k;
                for (k = 0; k < len; k++) {
                    longest[k] = str[i - len + k];
                }
                longest[len] = '\0';
            }
            len = 0;
        }

        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}