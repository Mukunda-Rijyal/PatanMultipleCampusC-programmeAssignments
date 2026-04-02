/*16. Write a program to find the number of times the vowel 'e' appears in a given string.*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == 'e' || str[i] == 'E') {
            count++;
        }
    }

    printf("The vowel 'e' appears %d times in the string.\n", count);

    return 0;
}