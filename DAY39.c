//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

void main() {
    int r, c;
    printf("enter rows and columns: ");
    scanf("%d%d", &r, &c);

    int matrix[r][c];

    printf("enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (r != c) {   // must be square matrix
        printf("false");
        return;
    }

    int flag = 1;   // assume diagonal is distinct

    for (int i = 0; i < r; i++) {
        for (int j = i + 1; j < r; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            break;
    }

    if (flag == 1)
        printf("true");
    else
        printf("false");
}
//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

void main() {
    int r, c;
    printf("enter rows and columns: ");
    scanf("%d%d", &r, &c);

    int matrix[r][c];

    printf("enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum=0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i == j) {
                sum+=matrix[i][j];
            }
        }
    }
    printf("%d",sum);
}
