//Q110: Max Element in Each Subarray of Size k
/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2
*/
#include <stdio.h>
void main() {
    int n, k, i, j;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    for(i = 0; i <= n - k; i++) {
        int max = arr[i];
        for(j = 1; j < k; j++)
            if(arr[i + j] > max) max = arr[i + j];
        printf("%d ", max);
    }
}