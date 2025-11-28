// Q123: Count characters, words, lines
#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\n')
            inWord = 0;
        else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    fclose(file);
    printf("Characters: %d\nWords: %d\nLines: %d\n", characters, words, lines + 1);
    return 0;
}
