/*21. Write a program to read a text file and copy all contents into a new file.*/
#include <stdio.h>
int main() {
    char source_filename[100], dest_filename[100];
    FILE *source_file, *dest_file;
    char ch;
    printf("Enter the source filename: ");
    scanf("%s", source_filename);
    printf("Enter the destination filename: ");
    scanf("%s", dest_filename);
    source_file = fopen(source_filename, "r");
    if (source_file == NULL) {
        perror("Error opening source file");
        return 1;
    }
    dest_file = fopen(dest_filename, "w");
    if (dest_file == NULL) {
        perror("Error opening destination file");
        fclose(source_file);
        return 1;
    }
    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, dest_file);
    }
    printf("File copied successfully.\n");
    fclose(source_file);
    fclose(dest_file);
    return 0;
}