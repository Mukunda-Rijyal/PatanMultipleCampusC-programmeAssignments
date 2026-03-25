/*Write a C program 
that accepts some integers 
from the user and finds the 
largest value and its input position.*/
#include <stdio.h>

int main() {
    int n, num;
    int largest, position = 1;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &largest);

    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > largest) {
            largest = num;
            position = i;
        }
    }

    printf("Largest number = %d\n", largest);
    printf("Position = %d\n", position);

    return 0;
}
