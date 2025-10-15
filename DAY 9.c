//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>

void main() {
    float a, b, c, d, r1, r2; 
    scanf("%f %f %f", &a, &b, &c);
    d = b*b - 4*a*c;
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and different: %.0f, %.0f", r1, r2);
    } else if (d == 0) {
        r1 = -b / (2*a);
        printf("Roots are real and same: %.0f", r1);
    } else {
        printf("Roots are imaginary");
    }
}
//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include <stdio.h>
void main() {
    float percent;
    printf("Enter total percentage: ");
    scanf("%f", &percent);

    if (percent >= 90 && percent <= 100)
        printf("Grade A");
    else if (percent >= 80 && percent < 90)
        printf("Grade B");
    else if (percent >= 70 && percent < 80)
        printf("Grade C");
    else if (percent >= 60 && percent < 70)
        printf("Grade D");
    else if (percent >= 0 && percent < 60)
        printf("Grade F");
    else
        printf("Invalid percentage");
}
