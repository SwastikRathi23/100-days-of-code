//Write a program to check if a number is a palindrome.
#include<stdio.h>
int main(){
    int n ,original, reversed=0 , remainder;
    printf("enter the number : ");
    scanf("%d", &n);
    original = n; 
    while(n != 0){
        remainder=n%10;
        reversed = reversed*10+remainder;
        n = n/10;
    }
    if(original==reversed){
        printf("it is a palindrome\n");
    }
    else{
        printf("it is not a palindrome\n");
    }
    return 0; 
}