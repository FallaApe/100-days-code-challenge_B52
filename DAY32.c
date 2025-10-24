//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

void main() {
    int n;
    printf("Enter size of first array: ");
    scanf("%d", &n);

    int arr1[n];
    printf("Enter elements of first array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    int m;
    printf("Enter size of second array: ");
    scanf("%d", &m);

    int arr2[m];
    printf("Enter elements of second array: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    int a = n + m;
    int arr3[a];

    int count = 0;

    for (int i = 0; i < n; i++) {
        arr3[count] = arr1[i];
        count++;
    }

    for (int i = 0; i < m; i++) {
        arr3[count] = arr2[i];
        count++;
    }

    printf("Merged Array: ");
    for (int i = 0; i < a; i++) {
        printf("%d ", arr3[i]);
    }
}
//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

void main() {
    int n, digit;
    int freq[10] = {0};  // To store frequency of each digit
    
    printf("Enter number: ");
    scanf("%d", &n);
    
    int temp = n;
    
    while (temp > 0) {
        digit = temp % 10;
        freq[digit]++;
        temp = temp / 10;
    }
    
    int max = 0, ans = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
            ans = i;
        }
    }
    
    printf("Digit that occurs the most: %d", ans);
}
