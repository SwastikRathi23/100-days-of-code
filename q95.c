//Check if one string is a rotation of another.
#include <stdio.h>

int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int isSubstring(char s1[], char s2[]) {
    int i = 0, j;
    int len1 = stringLength(s1);
    int len2 = stringLength(s2);

    for (i = 0; i <= len1 - len2; i++) {
        for (j = 0; j < len2; j++) {
            if (s1[i + j] != s2[j])
                break;
        }
        if (j == len2)
            return 1;  
    }
    return 0;  
}

int main() {
    char str1[200], str2[200], temp[400];
    int i, len1, len2;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for(i = 0; str1[i] != '\0'; i++) {
        if(str1[i] == '\n') str1[i] = '\0';
    }
    for(i = 0; str2[i] != '\0'; i++) {
        if(str2[i] == '\n') str2[i] = '\0';
    }

    len1 = stringLength(str1);
    len2 = stringLength(str2);

    if (len1 != len2) {
        printf("Strings are NOT rotations of each other.\n");
        return 0;
    }

    for (i = 0; i < len1; i++) {
        temp[i] = str1[i];
        temp[i + len1] = str1[i];
    }
    temp[len1*2] = '\0';

    if (isSubstring(temp, str2))
        printf("Strings are rotations of each other.\n");
    else
        printf("Strings are NOT rotations of each other.\n");

    return 0;
}