//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
#include <ctype.h>

int vowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' );
}


void main() {
    char str[50];
    printf("enter string: ");
    fgets(str,50,stdin);
    
    int count=0,j=0;
    while (str[count] != '\0') {
        if (vowel(str[count]) == 0) {
            str[j] = str[count];
            j++;
        }
        count++;
    }
    printf("%s",str);
}
