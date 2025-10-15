//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>
void main(){
    int a,sum=0;
    printf("enter number: ");
    scanf("%d",&a);
    for (int i=1;i<=a;i++) {
        if (i%2!=0) {
            sum+=i;
        }
    }
    printf("%d",sum);
}

//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>
void main(){
    int a,mult=1;
    printf("enter number: ");
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        if (i%2==0) {
            mult=mult*i;
        }
    }
    printf("%d",mult);
}
