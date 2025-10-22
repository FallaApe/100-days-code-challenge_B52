//Q47: Write a program to print the following pattern:
*
**
***
****
*****

/*
Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/
#include <stdio.h>
void main() {
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    for (int i=0;i<=a;i++){
        for (int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
//Q48: Write a program to print the following pattern:
1
12
123
1234
12345

/*
Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/
#include <stdio.h>
void main() {
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    for (int i=1;i<=a;i++){
        for (int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
