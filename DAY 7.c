//question 13
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

//question 14
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
