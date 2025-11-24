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
//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char s[1000];
    int f[26] = {0};
    scanf("%s", s);
    for(int i = 0; s[i]; i++) {
        int k = s[i] - 'a';
        f[k]++;
        if(f[k] == 2) {
            printf("%c", s[i]);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
