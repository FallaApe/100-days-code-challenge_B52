//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>
void main() {
    float c;
    printf("enter temp in celsius: ");
    scanf("%f",&c);
    float f = (c*9/5)+32;
    printf("temp in fahrenheit is %f",f);
} 

//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include <stdio.h>
void main() {
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("after swap: %d, %d",b,a);
}
 
