//Reverse each word in a sentence without changing the word order.
#include <stdio.h>

int main() {
    char str[300];
    int i = 0, start, end;
    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    i = 0;
    while (str[i] != '\0') {
        
        while (str[i] == ' ' && str[i] != '\0') i++;

        start = i;

        while (str[i] != ' ' && str[i] != '\0') i++;

        end = i - 1;

        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }

    printf("Sentence with reversed words: %s\n", str);
    return 0;
}