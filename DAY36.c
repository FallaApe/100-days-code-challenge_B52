//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter rows and coloumn: ");
    scanf("%d%d", &a, &b);

    int arr[a][b];
    printf("enter array elements: \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("array elements are: \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>
void main()
{
    int a, b,sum=0;
    printf("enter rows and coloumn: ");
    scanf("%d%d", &a, &b);

    int arr[a][b];
    printf("enter array elements: \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("array elements are: \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            sum+=arr[i][j];
        }
    }

    printf("sum of array elements is: %d",sum);
}
