//Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
#include <stdio.h>
void main () {
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    printf("factorails are\n");
    for (int i=1;i<=n;i++) {
        if (n%i==0) {
            printf("%d\t",i);
        }
    }
}
//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
void main () {
    int n,m;
    printf("enter 2 numbers: ");
    scanf("%d%d",&n,&m);
    int hcf=1;
    
    for (int i=1; i<=n && i<=m; i++ ) {
        if (n%i==0 && m%i==0) {
            hcf = i;
        }
    }
    printf("hcf is %d",hcf);
    
}
