/*13. Write a program that illustrates the similarity between arrays and pointers.*/
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; 
    printf("Array elements using array indexing: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nArray elements using pointer arithmetic: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i)); 
    }
    printf("\n");
    return 0;
}