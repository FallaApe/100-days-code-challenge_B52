//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
void main() {
    int n,digit[100],count=0;
    printf("enter number: ");
    scanf("%d",&n);
    int temp=n;
    while (n>0) {
        digit[count] = n%10;
        n = n/10;
        count+=1;
    }
    int arm=0;
    for (int i = count-1; i>=0; i--) {
        arm += digit[i]*digit[i]*digit[i];
    }
    if (arm==temp) {
        printf("number is an armstrong number");
    }
    else {
        printf("not an armstrong number");
    }
}

//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>

void main() {
    int n, isPrime = 1; 
    printf("Enter number: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0; 
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = 0; 
                break;
            }
        }
    }

    if (isPrime==1)
        printf("%d is prime\n", n);
    else
        printf("%d is not prime\n", n);
}
