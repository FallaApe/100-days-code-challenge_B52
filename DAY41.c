//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>

void main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    scanf("%s", str);  

    while (str[count] != '\0') {  
        count++;
    }

    printf("Number of characters: %d\n", count);
}
//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>
void main() {
    char str[100];
    
    printf("enter input: ");
    scanf("%s",str);
    
    int count = 0;
    while (str[count] != '\0') {
        printf("%c\n",str[count]);
        count+=1;
    }
    
}
