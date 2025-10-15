//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/
 #include <stdio.h>
void main() {
    int year;
    printf("enter year: ");
    scanf("%d",&year);
    if ((year%4==0 && year%100!=0) || (year%400==0)) {
        printf("year is leap year");
    }    
    else {
        printf("not a leap year");
    }
}

//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
 #include <stdio.h>

void main() {
    char a;
    printf("Enter character: ");
    scanf("%c", &a);

    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' ||
        a=='A' || a=='E' || a=='I' || a=='O' || a=='U') {
        printf("%c is a vowel", a);
    } else {
        printf("%c is a consonant", a);
    }
}
