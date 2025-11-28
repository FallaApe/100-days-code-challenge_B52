// Q124: Copy one file to another using fgetc() and fputc()
#include <stdio.h>

int main() {
    FILE *src, *dest;
    char ch, srcName[50], destName[50];

    printf("Enter source file name: ");
    scanf("%s", srcName);

    printf("Enter destination file name: ");
    scanf("%s", destName);

    src = fopen(srcName, "r");
    if (src == NULL) {
        printf("Source file could not be opened.\n");
        return 1;
    }

    dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Destination file could not be created.\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destName);
    return 0;
}
