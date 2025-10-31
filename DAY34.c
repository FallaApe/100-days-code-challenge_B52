//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

void main() {
    int n, pos, value;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n + 1];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position : ", );
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &value);

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    

    printf("Array after insertion: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

}
//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>

void main() {
    int n, pos, value;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n + 1];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position : " );
    scanf("%d", &pos);

    for (int i = pos ; i < n -1; i++) {
        arr[i] = arr[i + 1];
    }

    n-=1;
    

    printf("Array after removing index %d: ",pos);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

}
