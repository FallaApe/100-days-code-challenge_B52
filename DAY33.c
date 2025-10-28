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
//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

void main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n + 1]; 
    printf("Enter sorted elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int m;
    printf("Enter element to insert: ");
    scanf("%d", &m);

    int i = n - 1;
    while (i >= 0 && arr[i] > m) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = m; 
    n++;

    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
