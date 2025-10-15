//question 15
#include <stdio.h>
void main() {
    char a;
    printf("Enter character: ");
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z') {  
        printf("%c is lower case\n", a);
    } else if (a >= 'A' && a <= 'Z') {  
        printf("%c is upper case\n", a);
    } else {
        printf("%c is not an alphabet\n", a);
    }
} 

//qiestion 16
#include <stdio.h>
void main() {
    int a,b,c;
    printf("enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c) {
        printf("%d is the greatest",a);
    }
    else if (b>c) {
        printf("%d is the  greatest",b);
    }
    else {
        printf("%d is thhe greatest",c);
    }
} 
