//question 25
#include <stdio.h>

void main() {
    int a, b;
    char op;
    
    printf("Enter two numbers and an operator (+, -, *, /, %): ");
    scanf("%d %d %c", &a, &b, &op);

    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("%d\n", a / b);
            else
                printf("Division by zero\n");
            break;
        case '%':
            if (b != 0)
                printf("%d\n", a % b);
            else
                printf("Modulo by zero!\n");
            break;
        default:
            printf("Invalid operator\n");
    }
}

//question 26
#include <stdio.h>
void main(){
    int a;
    printf("enter number: ");
    scanf("%d",&a);
    for (int i=1;i<=a;i++) {
        printf("%d",i);
    }
}
