//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>

void main() {
    char s1[100], s2[100];
    int count1[256] = {0}, count2[256] = {0}, i;

    scanf("%s", s1);
    scanf("%s", s2);

    if (strlen(s1) != strlen(s2)) {
        printf("Not anagrams");
        return;
    }

    for (i = 0; s1[i] != '\0'; i++) count1[s1[i]]++;
    for (i = 0; s2[i] != '\0'; i++) count2[s2[i]]++;

    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            printf("Not anagrams");
            return;
        }
    }

    printf("Anagrams");
}
//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

void main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, max = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (strlen(word) > max) {
                max = strlen(word);
                strcpy(longest, word);
            }
            j = 0;
        }
        i++;
    }

    printf("%s", longest);
}
