//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
void main () {
    int n,m;
    printf("enter 2 numbers: ");
    scanf("%d%d",&n,&m);
    int hcf=1;
    
    for (int i=1; i<=n && i<=m; i++ ) {
        if (n%i==0 && m%i==0) {
            hcf = i;
        }
    }
    int lcm=(n*m)/hcf;
    printf("lcm is %d",lcm);
    
}

//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
void main () {
    int n,remainder,sum=0;
    printf("enter number: ");
    scanf("%d",&n);

    while (n>0) {
        remainder = n%10;
        sum+=remainder;
        n = n/10;
    }
    printf("sum of all digits is %d",sum);
}
