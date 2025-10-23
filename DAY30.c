//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

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
    int odd=0,even=0;
    for (int i=0;i<n;i++) {
        if (arr[i]%2==0) {
            even+=1;
        }
        else {
            odd+=1;
        }
    }
    printf("even - %d,odd - %d",even,odd);

}
//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

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
    int pos=0,neg=0,zero=0;
    for (int i=0;i<n;i++) {
        if (arr[i]>0) {
            pos+=1;
        }
        else if (arr[i]<0) {
            neg+=1;
        }
        else {
            zero+=1;
        }
    }
    printf("positive - %d,negative - %d, zero - %d",pos,neg,zero);

}

