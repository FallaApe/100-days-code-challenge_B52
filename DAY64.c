#include <stdio.h>
#include <string.h>

void main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);

    int max_len = 0, start = 0, freq[256] = {0};
    for(int i = 0; i < strlen(s); i++) {
        freq[(int)s[i]]++;
        while(freq[(int)s[i]] > 1) {
            freq[(int)s[start]]--;
            start++;
        }
        if(i - start + 1 > max_len) max_len = i - start + 1;
    }
    printf("%d", max_len);
}