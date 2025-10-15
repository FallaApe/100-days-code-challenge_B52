//question 11
#include <stdio.h>
void main() {
    int a;
    printf("enter number: ");
    scanf("%d",&a);
    if (a%2==0) {
        printf("%d is even",a);
    }
    else {
        printf("%d is odd",a);
    }
} 

//question 12
 #include <stdio.h>
void main() {
    int a;
    printf("enter number: ");
    scanf("%d",&a);
    if (a>0) {
        printf("%d is positive",a);
    }
    else if (a<0) {
        printf("%d is negative",a);
    }
    else {
        printf("zero");
    }
}
