//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
void main() {
    int n,strong=0;
    printf("enter number: ");
    scanf("%d",&n);
    int remainder,temp = n;
    
    while (n>0) {
        int fact=1;
        remainder = n%10;
        for (int i=1;i<=remainder;i++){
            fact = fact*i;
        }
        strong += fact;
        n = n/10;
    }

    if (temp == strong){
        printf("strong number");
    }
    else 
        printf("not strong number");
}
//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>
void main() {
    int a;
    printf("enter number: ");
    scanf("%d",&a);
    float sum = 0;

    for (int i = 1; i <= a; i++) {
        float n = (i * 2) - 1;
        float d = (i * 2);

        if (i == 1)
            sum += 1;          
        else
            sum += n / d;      
    }

    printf("Approximate sum: %.1f", sum);
}

