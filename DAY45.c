//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
void main() {
    char str[50];
    printf("enter word: ");
    scanf("%s", str);

    char a;
    printf("enter letter u want to check: ");
    scanf(" %c", &a); 

    int count = 0, count1 = 0;
    while (str[count] != '\0') {
        if (str[count] == a) {
            count1++;
        }
        count++;
    }

    printf("%d", count1);
}
//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>
#include <ctype.h>

void convert(char str[]) {
    int count = 0;
    while (str[count] != '\0') {  
        if (islower(str[count])) {
            str[count] = toupper(str[count]);
        }
        else if (isupper(str[count])) {
            str[count] = tolower(str[count]);
        }
        count++;
    }
}

void main() {
    char str[100];
    printf("enter string: ");
    fgets(str, sizeof(str), stdin);  

    convert(str);    
    printf("converted string: %s", str);
}
