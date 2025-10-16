//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
void main() {
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    
    int binary[32];
    for (int i=0;i<32;i++) {
        binary[i]=0;
    }
    int index=0;
    while (n>0) {
        binary[index]=n%2;
        n=n/2;
        index++;
    }
    printf("binary: ");
    for (int i=index-1;i>=0;i--) {
        printf("%d",binary[i]);
    }                                                              
}

//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
void main() {
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    //palidrome number
    int reversed=0,original=n;
    while (n>0) {
        int digit=n%10;
        reversed=reversed*10+digit;
        n=n/10;
    }
    if (original==reversed) {
        printf("palindrome");
    } else {
        printf("not palindrome");
    }
}
