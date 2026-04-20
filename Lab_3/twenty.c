/*20. Write a program to read from a text file and count the number of lines and characters in that file.*/
#include <stdio.h>
int main() {
    char filename[100];
    FILE *file;
    int lines = 0, characters = 0;
    char ch;

    printf("Enter the filename to read: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;
        if (ch == '\n') {
            lines++;
        }
    }
    
    if (characters > 0 && ch != '\n') {
        lines++;
    }

    printf("Number of lines: %d\n", lines);
    printf("Number of characters: %d\n", characters);

    fclose(file);
    return 0;
}