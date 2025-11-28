// Q121: Create a file and write user data
#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int age;

    file = fopen("info.txt", "w");
    if (file == NULL) {
        printf("File could not be created.\n");
        return 1;
    }

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(file, "Name: %sAge: %d\n", name, age);
    fclose(file);

    printf("File created successfully! Data written to info.txt\n");
    return 0;
}
