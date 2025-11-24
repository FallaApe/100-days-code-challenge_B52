//Q103: Write a Program to take an array of integers as input, calculate the pivot index.

/*
Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3
*/
#include <stdio.h>

void main() {
    int n, i, sum = 0, leftSum = 0;
    int nums[100];

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }

    for(i = 0; i < n; i++) {
        if(leftSum == sum - leftSum - nums[i]) {
            printf("%d", i);
            return;
        }
        leftSum += nums[i];
    }

    printf("-1");
}
