#include <stdio.h>
#include <string.h>

void main() {
    char s[100], t[100];
    printf("Enter string s: ");
    scanf("%s", s);
    printf("Enter string t: ");
    scanf("%s", t);

    if(strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return;
    }

    int freq[256] = {0};
    for(int i = 0; i < strlen(s); i++) freq[(int)s[i]]++;
    for(int i = 0; i < strlen(t); i++) freq[(int)t[i]]--;

    for(int i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            printf("Not Anagram");
            return;
        }
    }
    printf("Anagram");
}