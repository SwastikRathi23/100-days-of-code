//Write a program to print the following pattern:
//    5
//   45
//  345
// 2345
//12345
#include <stdio.h>

int main() {
    int i, j, rows = 5;

    for (i = 0; i < rows; i++) {
        
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
    
        for (j = rows - i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}