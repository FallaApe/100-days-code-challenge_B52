//question 23
#include <stdio.h>
void main() {
    int days, fine = 0;
    printf("Enter days: ");
    scanf("%d", &days);

    if (days <= 5)
        fine = days * 2;
    else if (days <= 10)
        fine = (5 * 2) + (days - 5) * 4;
    else if (days <= 30)
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
    else
        printf("Membership Cancelled"), days = -1;

    if (days != -1)
        printf("Fine %d", fine);
}

//question 24
#include <stdio.h>
void main() {
    int units, bill = 0;
    printf("Enter units: ");
    scanf("%d", &units);

    if (units <= 100)
        bill = units * 5;
    else if (units <= 200)
        bill = (100 * 5) + (units - 100) * 7;
    else if (units <= 300)
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    else
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;

    printf("Bill: %d", bill);
}
