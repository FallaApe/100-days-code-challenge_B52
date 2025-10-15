//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include <stdio.h>
void main() {
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    int sum = a+b;
    printf("sum = %d",sum);
}

//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
void main() {
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    int sum = a+b;
    int diff = a-b;
    int prod = a*b;
    int quot = a/b;
    printf("sum = %d, diff =%d, product = %d, Quotient = %d ",sum,diff,prod,quot);
}
 
