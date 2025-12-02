Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!
*/

#include <stdio.h>
#include <string.h>

void main() {
    enum Role { ADMIN, USER, GUEST };
    char input[20];
    enum Role r;

    scanf("%s", input);

    if (strcmp(input, "ADMIN") == 0) r = ADMIN;
    else if (strcmp(input, "USER") == 0) r = USER;
    else r = GUEST;

    if (r == ADMIN) printf("Welcome Admin!");
    else if (r == USER) printf("Welcome User!");
    else printf("Welcome Guest!");
}
