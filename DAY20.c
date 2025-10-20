//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
void main () {
    int n,remainder,digits,mult=1;
    printf("enter number: ");
    scanf("%d",&n);
    
    int temp=n;
    while (n>0) {
        remainder = n%10;
        if (remainder%2!=0) {
            mult = mult*remainder;
        }
        n=n/10;
    }
    printf("%d",mult);
}
//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
void main () {
    int n,remainder,digit=0 ,m=0;
    printf("enter number: ");
    scanf("%d",&n);
    int temp=n;
    while (n>0) {
        remainder = n%10;
        digit+=1;
        n=n/10;
    }
    for (int i=1;i<=digit;i++) {
       
    }
    
}
