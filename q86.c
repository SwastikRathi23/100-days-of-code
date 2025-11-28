//Check if a string is a palindrome.
#include <stdio.h>

int main() {
    char str[200];
    int start = 0, end = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[end] != '\0') {
        end++;
    }

    if (end > 0 && str[end - 1] == '\n') {
        str[end - 1] = '\0';
        end--;
    }

    end--;  
    int isPalindrome = 1;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}