//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>

void main() {
    char str[50];
    printf("enter string: ");
    scanf("%s", str);

    int count = 0, vol = 0, cons = 0;

    while (str[count] != '\0') {        // fixed
        if ( str[count] == 'A' || str[count] == 'E' || str[count] == 'I' || 
             str[count] == 'O' || str[count] == 'U' || 
             str[count] == 'a' || str[count] == 'e' || str[count] == 'i' || 
             str[count] == 'o' || str[count] == 'u' ) 
        {
            vol++;
        } 
        else {
            cons++;
        }
        count++;   // IMPORTANT!!
    }

    printf("vowels: %d\n", vol);
    printf("consonants: %d\n", cons);
}
//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>

void main() {
    char str[50];
    int i = 0;

    printf("enter string: ");
    scanf("%s", str);    

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  
        }
        i++;
    }

    printf("uppercase string: %s", str);
}

