//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>
void main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n],sum=0;
    
    printf("enter numbers: ");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++) {
        sum+=arr[i];
    }
    printf("%d",sum);

}
//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include <stdio.h>
void main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("enter numbers: ");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int min=arr[0],max=arr[0];
    for (int i=0;i<n;i++) {
        if (arr[i]<min) {
            min = arr[i];
        }
    }
    for (int i=0;i<n;i++) {
        if (arr[i]>max) {
            max = arr[i];
        }
    }
    printf("minn - %d, max - %d",min,max);

}
