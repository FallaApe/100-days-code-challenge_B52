//Q109: Maximum Sum of Subarrays of Size k
/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400
*/
#include <stdio.h>
void main() {
    int n, k, i, j, maxSum = -1e9;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    for(i = 0; i <= n - k; i++) {
        int sum = 0;
        for(j = 0; j < k; j++) sum += arr[i + j];
        if(sum > maxSum) maxSum = sum;
    }
    printf("%d", maxSum);
}