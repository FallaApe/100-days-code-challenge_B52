//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include <stdio.h>
void main() {
    char a;
    printf("Enter character: ");
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z') {  
        printf("%c is lower case\n", a);
    } else if (a >= 'A' && a <= 'Z') {  
        printf("%c is upper case\n", a);
    } else {
        printf("%c is not an alphabet\n", a);
    }  
} 

//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>
void main() {
    int a,b,c;
    printf("enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c) {
        printf("%d is the greatest",a);
    }
    else if (b>c) {
        printf("%d is the  greatest",b);
    }
    else {
        printf("%d is thhe greatest",c);
    }
} 
