//question 3
 #include <stdio.h>
void main() {
    float len,wid;
    printf("enter length and width: ");
    scanf("%f%f",&len,&wid);
    float area = len*wid;
    float peri= (len*2)+(wid*2);
    printf("area of rectangle is %f\n",area);
    printf("perimeter of the rectangle is %f",peri);
}

//question 4
#include <stdio.h>
void main() {
    int radius;
    printf("enter radius: ");
    scanf("%d",&radius);
    int area = 3.14*radius*radius;
    int circum = 2*3.14*radius;
    printf("area of circle is %d\n",area);
    printf("circumference of circle is %d",circum);
