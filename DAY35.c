//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

void main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int highest=arr[0];
    int second_highest = arr[0];
    for (int i=0;i<n;i++){
        if ( arr[i] > highest ) {
            highest = arr[i];
        }
    }
    
    
    for (int i=0;i<n;i++) {
        if (arr[i] > second_highest && arr[i] < highest) {
            second_highest = arr[i];
        }
    }
    
    printf("second highest element is %d",second_highest);

}
//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n;  // handle if k > n

    int rotated[n];  // second array

    // Copy last k elements first
    int index = 0;
    for (int i = n - k; i < n; i++) {
        rotated[index] = arr[i];
        index++;
    }

    // Copy first n-k elements next
    for (int i = 0; i < n - k; i++) {
        rotated[index] = arr[i];
        index++;
    }

    printf("Array after rotating right by %d positions:\n", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}
