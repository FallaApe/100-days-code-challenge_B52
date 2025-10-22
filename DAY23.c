//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/
#include <stdio.h>
void main() {
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    
    float n = 2.0, d = 3.0;
    float sum = 0.0;

    for (int i = 1; i <= a; i++) {
        sum += n / d;   
        n += 2;
        d += 4;
    }

    printf("Approximate sum: %.2f\n", sum);
}

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
