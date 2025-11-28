// Q122: Read file and display contents
#include <stdio.h>

int main() {
    FILE *file;
    char line[100];

    file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}
