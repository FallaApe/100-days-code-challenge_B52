//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

void main() {
    char s1[100], s2[100], temp[200];
    
    scanf("%s", s1);
    scanf("%s", s2);
    
    if (strlen(s1) != strlen(s2)) {
        printf("Not rotation");
        return;
    }
    
    strcpy(temp, s1);
    strcat(temp, s1);
    
    if (strstr(temp, s2))
        printf("Rotation");
    else
        printf("Not rotation");
}

//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>

void main() {
    char str[200], word[50];
    int i = 0, j = 0, k;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            for (k = j - 1; k >= 0; k--) {
                printf("%c", word[k]);
            }
            if (str[i] == ' ') printf(" ");
            j = 0;
        }
        i++;
    }
}
