//question 17
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
//question 18
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
