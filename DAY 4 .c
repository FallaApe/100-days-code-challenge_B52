//question 7
#include <stdio.h>
void main() {
    int a,b;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("after swap= %d %d",b,a);
}

//question 8
#include <stdio.h>
void main() {
    int a,sum=0;
    printf("enter limit: ");
    scanf("%d",&a);
    for (int i=1;i<=a;i++) {
        sum+=i;
    }
    printf("sum=%d",sum);
}
 
 
