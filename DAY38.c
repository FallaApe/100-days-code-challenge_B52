//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>

void main() {
    int r, c;
    printf("enter rows and columns: ");
    scanf("%d%d", &r, &c);

    int matrix[r][c];

    printf("enter elements of Matrix 1:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int r1, c1;
    printf("enter rows and columns: ");
    scanf("%d%d", &r1, &c1);

    int matrix1[r1][c1];

    printf("enter elements of Matrix 2:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);  
        }
    }
    
    int sum[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = matrix[i][j] + matrix1[i][j];
        }
    }
    
    printf("Sum of matrices:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}
//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

void main() {
    int r, c;
    printf("enter rows and columns: ");
    scanf("%d%d", &r, &c);

    if (r != c) {
        printf("not symmetric");
        return;
    }

    int matrix[r][c];

    printf("enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
   
    int symmetric = 1;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric)
            break;
    }

    if (symmetric==1)
        printf("symmetric");
    else
        printf("not symmetric");
}
