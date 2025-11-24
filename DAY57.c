//Q107: Previous Greater Element (Brute Force)
/*
Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
-1, -1, 3, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
-1, -1, 8, 8, 8

Input 3:
arr = [1, 2, 3, 5]
Output 3:
-1, -1, -1, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, 5, 4, 3
*/
#include <stdio.h>
void main() {
    int n, i, j, found;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(i = 0; i < n; i++) {
        found = -1;
        for(j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                found = arr[j];
                break;
            }
        }
        printf("%d", found);
        if(i < n - 1) printf(", ");
    }
}