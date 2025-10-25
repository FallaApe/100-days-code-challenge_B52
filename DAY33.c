//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>
void main() {
    int n;
    printf("enter size: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("enter elements: ");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    
    int m;
    printf("enter element: ");
    scanf("%d",&m);
    
    for (int i=0;i<n;i++) {
        if (m == arr[i]) {
            printf("Found at index %d",i);
        }
    }
}
//
