//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

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

    int maxIndex = 0;
    for(int i=1;i<n;i++){
        if(s[i].marks > s[maxIndex].marks){
            maxIndex = i;
        }
    }

    printf("Topper: %s (Marks: %d)", s[maxIndex].name, s[maxIndex].marks);

    return 0;
}
