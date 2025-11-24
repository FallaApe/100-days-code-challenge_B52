//Q104: Write a Program to take a positive integer n as input, find pivot integer x.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6
*/
#include <stdio.h>

void main() {
    int n, x, leftSum, rightSum;
    scanf("%d", &n);

    for(x = 1; x <= n; x++) {
        leftSum = x * (x + 1) / 2;
        rightSum = (n * (n + 1) / 2) - (x * (x - 1) / 2);
        if(leftSum == rightSum) {
            printf("%d", x);
            return;
        }
    }
    printf("-1");
}
