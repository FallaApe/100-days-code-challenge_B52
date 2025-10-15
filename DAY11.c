//Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
#include <stdio.h>
void main() {
    int month;
    scanf("%d", &month);
    switch(month) {
        case 1:
            printf("January, 31 days");
            break;
        case 2:
            printf("February, 28 days");
            break;
        case 3:
            printf("March, 31 days");
            break;
        case 4:
            printf("April, 30 days");
            break;
        case 5:
            printf("May, 31 days");
            break;
        case 6:
            printf("June, 30 days");
            break;
        case 7:
            printf("July, 31 days");
            break;
        case 8:
            printf("August, 31 days");
            break;
        case 9:
            printf("September, 30 days");
            break;
        case 10:
            printf("October, 31 days");
            break;
        case 11:
            printf("November, 30 days");
            break;
        case 12:
            printf("December, 31 days");
            break;
        default:
            printf("Invalid month number");
    }
}

//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
void main() {
    float cp, sp, percent;
    scanf("%f %f", &cp, &sp);
    if (sp > cp) {
        percent = ((sp - cp) / cp) * 100;
        printf("Profit %.0f%%", percent);
    } else if (cp > sp) {
        percent = ((cp - sp) / cp) * 100;
        printf("Loss %.0f%%", percent);
    } else {
        printf("No Profit No Loss");
    }
}






