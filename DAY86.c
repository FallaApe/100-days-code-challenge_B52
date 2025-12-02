Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30
*/

#include <stdio.h>
#include <string.h>

void main() {
    enum Menu { ADD, SUBTRACT, MULTIPLY };
    char op[20];
    int a, b;
    enum Menu choice;

    scanf("%s %d %d", op, &a, &b);

    if (strcmp(op, "ADD") == 0) choice = ADD;
    else if (strcmp(op, "SUBTRACT") == 0) choice = SUBTRACT;
    else choice = MULTIPLY;

    switch (choice) {
        case ADD: printf("%d", a + b); break;
        case SUBTRACT: printf("%d", a - b); break;
        case MULTIPLY: printf("%d", a * b); break;
    }
}
