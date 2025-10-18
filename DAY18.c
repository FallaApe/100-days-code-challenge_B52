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
void main() {
    int n, fact[100], count = 0; 
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            fact[count] = i;
            count++;
        }
    }
    printf("Factors of %d are: ", n);
    for (int i = 0; i < count; i++) {
        printf("%d\t", fact[i]);
    }
    printf("\n");
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

void main() {
    int n1, n2;
    int fact1[100], fact2[100];
    int count1 = 0, count2 = 0;
    
    printf("Enter number 1: ");
    scanf("%d", &n1);
    for (int i = 1; i <= n1; i++) {
        if (n1 % i == 0) {
            fact1[count1++] = i; 
        }
    }
    printf("Enter number 2: ");
    scanf("%d", &n2);
    for (int i = 1; i <= n2; i++) {
        if (n2 % i == 0) {
            fact2[count2++] = i; 
        }
    }

    int hcf = 1;
    for (int i = 0; i < count1; i++) {
        for (int j = 0; j < count2; j++) {
            if (fact1[i] == fact2[j] && fact1[i] > hcf) {
                hcf = fact1[i];
            }
        }
    }

    printf("HCF of %d and %d is %d\n", n1, n2, hcf);
}
