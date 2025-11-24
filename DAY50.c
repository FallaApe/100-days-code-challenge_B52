//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025
*/
#include <stdio.h>
#include <string.h>

void main() {
    char date[20];
    int day, year, month;

    scanf("%d/%d/%d", &day, &month, &year);

    char months[12][4] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    printf("%02d-%s-%d", day, months[month-1], year);
}


//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c
*/
#include <stdio.h>
#include <string.h>

void main() {
    char str[100];
    int i, j, k, len;

    scanf("%s", str);
    len = strlen(str);

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++)
                printf("%c", str[k]);
            if (!(i == len-1 && j == len-1))
                printf(",");
        }
    }
}
