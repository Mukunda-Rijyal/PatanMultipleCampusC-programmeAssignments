/*12. Write a program to pass an array to a function using a pointer and return an array from a function using a pointer.*/
#include <stdio.h>
void passArray(int *arr, int size) {
    printf("Array elements passed to the function: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int* returnArray(int size) {
    static int arr[100];
    printf("Enter %d elements for the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    return arr;
}
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[100]; 
    printf("Enter %d elements for the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    passArray(arr, size);
    int *returnedArr = returnArray(size);
    printf("Array elements returned from the function: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", returnedArr[i]);
    }
    printf("\n");
    return 0;
}