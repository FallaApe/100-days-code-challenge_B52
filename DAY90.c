Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male
*/

#include <stdio.h>
#include <string.h>

struct Person {
    enum Gender { MALE, FEMALE } g;
};

void main() {
    char input[20];
    struct Person p;

    scanf("Gender=%s", input);

    if (strcmp(input, "MALE") == 0) p.g = MALE;
    else p.g = FEMALE;

    if (p.g == MALE) printf("Male");
    else printf("Female");
}
