// Day 97 - Q147
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e, temp;
    FILE *fp = fopen("employee.bin", "wb");
    scanf("%s %d %f", e.name, &e.id, &e.salary);
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);
    fp = fopen("employee.bin", "rb");
    fread(&temp, sizeof(temp), 1, fp);
    printf("Name: %s | ID: %d | Salary: %.2f", temp.name, temp.id, temp.salary);
    fclose(fp);
    return 0;
}
