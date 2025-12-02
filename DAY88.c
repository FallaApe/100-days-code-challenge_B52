Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2
*/

#include <stdio.h>

void main() {
    enum Colors { RED, YELLOW, GREEN };

    printf("RED=%d\n", RED);
    printf("YELLOW=%d\n", YELLOW);
    printf("GREEN=%d\n", GREEN);
}
