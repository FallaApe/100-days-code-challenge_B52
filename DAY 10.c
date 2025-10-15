//question 19
#include <stdio.h>

void main() {
    float a, b, c;
    printf("Enter value of all three sides: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0) {
        
        if (a == b && b == c) {
            printf("The triangle is equilateral\n");
        }
        else if (a == b || b == c || c == a) {
            printf("The triangle is isosceles\n");
        }
        else if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)) {
            printf("The triangle is right angled\n");
        }
        else {
            printf("The triangle is scalene\n");
        }
    }
    else {
        printf("Triangle is invalid\n");
    }
}

//question 20
#include <stdio.h>
void main() {
    int n;
    scanf("%d", &n);
    switch(n) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid input");
    }
}
