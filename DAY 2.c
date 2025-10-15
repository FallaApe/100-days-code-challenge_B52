//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
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

//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
void main() {
    int radius;
    printf("enter radius: ");
    scanf("%d",&radius);
    int area = 3.14*radius*radius;
    int circum = 2*3.14*radius;
    printf("area of circle is %d\n",area);
    printf("circumference of circle is %d",circum);
