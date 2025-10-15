//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
#include <stdio.h>
void main() {
    int a,b;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("after swap= %d %d",b,a);
}

//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include <stdio.h>
void main() {
    int a,sum=0;
    printf("enter limit: ");
    scanf("%d",&a);
    for (int i=1;i<=a;i++) {
        sum+=i;
    }
    printf("sum=%d",sum);
}
 
 
