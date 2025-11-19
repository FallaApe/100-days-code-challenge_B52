//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>

void main() {
    char str[50];
    printf("enter string: ");
    scanf("%s", str);

    char reverse[50];
    int count2 = 0;
  
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }

    for (int i = count - 1; i >= 0; i--) {
        reverse[count2] = str[i];
        count2++;
    }
    reverse[count2] = '\0';

    printf("reversed string: %s", reverse);
}
//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

void main() {
    char str[50];
    printf("enter string: ");
    scanf("%s", str);

    int count = 0;
    while (str[count] != '\0') {
        count++;
    }

    int flag = 1;            
    for (int i = 0, j = count - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;         
            break;
        }
    }

    if (flag == 1)
        printf("palindrome");
    else
        printf("not palindrome");
}

