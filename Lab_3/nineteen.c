/*19. Write a program to prompt the user to input a filename and read the content of the file, then display it on the screen.*/
#include <stdio.h>
int main() {
    char filename[100];
    char ch;
    FILE *file;

    printf("Enter the filename to read: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    printf("Content of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    return 0;
}