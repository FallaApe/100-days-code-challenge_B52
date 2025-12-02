//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student getTopper(struct Student s[], int n){
    int maxIndex = 0;
    for(int i=1;i<n;i++){
        if(s[i].marks > s[maxIndex].marks){
            maxIndex = i;
        }
    }
    return s[maxIndex];
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(int i=0;i<n;i++){
        printf("Enter name: ");
        getchar();
        fgets(s[i].name, 50, stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Enter roll number: ");
        scanf("%d",&s[i].roll_no);

        printf("Enter marks: ");
        scanf("%d",&s[i].marks);
    }

    struct Student topper = getTopper(s, n);

    printf("Top Student: %s | Roll: %d | Marks: %d", topper.name, topper.roll_no, topper.marks);

    return 0;
}
