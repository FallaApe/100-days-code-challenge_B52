//Q105: Write a program to take an integer array nums of size n, and print the majority element.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3
*/
#include <stdio.h>

void main() {
    int n, i, count = 0, candidate = -1;
    int nums[100];

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        if(count == 0) {
            candidate = nums[i];
            count = 1;
        } else if(nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    count = 0;
    for(i = 0; i < n; i++) {
        if(nums[i] == candidate) count++;
    }

    if(count > n/2) printf("%d", candidate);
    else printf("-1");
}
