//Write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d", &n);
     printf("Binary representation: ");
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        int bit = (n >> i) & 1;   
        printf("%d", bit);
    }

    printf("\n");
    return 0;
}