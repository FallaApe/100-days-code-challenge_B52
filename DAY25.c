//Q49: Write a program to print the following pattern:
5
45
345
2345
12345

/*
Sample Test Cases:
Input 1:

Output 1:
5
45
345
2345
12345

*/
#include <stdio.h>
void main() {
    int a;
    printf("Enter number: ");
    scanf("%d", &a);

    for (int i = a; i >= 1; i--) {
        for (int j = i; j <= a; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}
//Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>
void main() {
    int a;
    printf("Enter number: ");
    scanf("%d", &a);

    for (int i = a; i >= 1; i--) {
        // print spaces
        for (int s = a; s > i; s--) {
            printf(" ");
        }
        // print stars
        for (int j = i; j >= 1; j--) {
            printf("*");
        }
        printf("\n");
    }
}
