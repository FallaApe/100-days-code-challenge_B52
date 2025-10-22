
//Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****

/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/
#include <stdio.h>
void main() {
    int n;
    printf("enter number of lines: ");
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        printf("*****\n");
    }
}
