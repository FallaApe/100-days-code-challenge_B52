//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
void main() {
    int n,number[100];
    printf("enter number: ");
    scanf("%d",&n);
    int remainder,digit=0,temp=n;
    while (n>0) {
        remainder = n%10;
        number[digit]=remainder;
        digit+=1;
        n=n/10;
    }
    
    int t = number[0];
    number[0] = number[digit-1];
    number[digit-1] = t;
    
    for (int i=digit-1;i>=0;i--) {
        printf("%d",number[i]);
    }
}

//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>
void main() {
    int n,sum=0;
    printf("enter number: ");
    scanf("%d",&n);
    for (int i=1;i<n;i++){
        if (n%i==0) {
            sum+=i;
        }
    }
    if (sum ==n ){
        printf("perfect number");
    }
    else {
        printf("not perfect number");
    }
}
