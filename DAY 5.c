//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>  
void main() {
    int P, R, T;
    float simple, comp, A;
    printf("Enter principal, rate, and time: ");
    scanf("%d%d%d", &P, &R, &T);
    simple = (P * R * T) / 100.0;
    A = P * pow((1 + R / 100.0), T);
    comp = A - P;
    printf("Simple Interest = %.2f\n", simple);
    printf("Compound Interest = %.2f\n", comp);
}

//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>
void main() {
    int time;
    printf("enter time in sec: ");
    scanf("%d",&time);
    int hour,min,sec;
    min = time/60;
    hour = min/60;
    sec = time%60;
    printf("%d:%d:%d",hour,min,sec);
}
 
