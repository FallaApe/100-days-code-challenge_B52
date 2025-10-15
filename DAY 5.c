//question 9
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

//question 10
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
 
