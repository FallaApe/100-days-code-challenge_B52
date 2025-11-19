//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>

void main() {
    char str[100];
    int i = 0, spaces = 0, digits = 0, special = 0;

    printf("enter string: ");
    fgets(str, 100, stdin);   

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            spaces++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        
        else if (str[i] != '\n') {   
            special++;        
        }
        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);
}
//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>

void main() {
    char str[100];
    int i = 0;

    printf("enter string: ");
    fgets(str, 100, stdin);   // allows spaces

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '-';     // replace space
        }
        i++;
    }

    printf("output: %s", str);
}
