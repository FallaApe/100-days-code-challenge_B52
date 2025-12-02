//Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s[5];

    for(int i=0;i<5;i++){
        printf("Enter name of student %d: ", i+1);
        getchar();
        fgets(s[i].name, 50, stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    printf("\n--- Student List ---\n");
    for(int i=0;i<5;i++){
        printf("Name: %s | Roll: %d | Marks: %d\n", s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}
