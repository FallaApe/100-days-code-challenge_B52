//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
void main() {
    int n,strong=0;
    printf("enter number: ");
    scanf("%d",&n);
    int remainder,temp = n;
    
    while (n>0) {
        int fact=1;
        remainder = n%10;
        for (int i=1;i<=remainder;i++){
            fact = fact*i;
        }
        strong += fact;
        n = n/10;
    }

    if (temp == strong){
        printf("strong number");
    }
    else 
        printf("not strong number");
}
//
