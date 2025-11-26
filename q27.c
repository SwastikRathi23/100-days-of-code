//Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d", &n);
    int sum=0;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
        sum+=i;
        printf("%d",sum);
    }
    }
}