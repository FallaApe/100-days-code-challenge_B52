// Q125: Append text to a file without overwriting
#include <stdio.h>

int main() {
    FILE *file;
    char filename[50], text[100];

    printf("Enter filename: ");
    scanf("%s", filename);
    getchar(); // Clear newline from buffer

    file = fopen(filename, "a");
    if (file == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);
    fclose(file);

    printf("File updated successfully with appended text.\n");
    return 0;
}
