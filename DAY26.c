//Q51: Write a program to print the following pattern:
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
        for (int s = 1; s < i; s++) {
            printf(" ");
        }
        for (int j = i; j <= a; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}
//Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

void main() {
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i == 9) {
            printf("*\n\n");
        }
        else if (i >= 2 && i <= 4) {
            printf("*\n");
            if (i == 4) printf("\n");
        }
        else if (i >= 5 && i <= 8) {
            printf("*\n");
        }
    }
}
