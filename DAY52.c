//Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it.

/*
Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2
*/
#include <stdio.h>

void main() {
    int n, x, i, ans = -1;
    int arr[100];

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);

    for(i = 0; i < n; i++) {
        if(arr[i] >= x) {
            ans = i;
            break;
        }
    }
    printf("%d", ans);
}
