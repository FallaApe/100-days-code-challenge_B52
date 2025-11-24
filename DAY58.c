//Q108: Product Except Self
/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]
*/
#include <stdio.h>
void main() {
    int n, i, j;
    scanf("%d", &n);
    int arr[n], result[n];
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(i = 0; i < n; i++) {
        int prod = 1;
        for(j = 0; j < n; j++) {
            if(j != i) prod *= arr[j];
        }
        result[i] = prod;
    }
    printf("[");
    for(i = 0; i < n; i++) {
        printf("%d", result[i]);
        if(i < n - 1) printf(", ");
    }
    printf("]");
}