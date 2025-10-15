//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>
void main() {
    int n,fact=1;
    printf("enter number: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        fact = fact*i;
    }
    printf("%d",fact);
}

//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
void main() {
    int n,remainder,reversed=0;
    printf("enter number: ");
    scanf("%d",&n);
    while (n!=0) {
        remainder = n%10;
        reversed = reversed*10 + remainder ;
        n/=10;
    }
    printf("reversed number is %d",reversed);
}
