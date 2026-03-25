/*8. Write a program that defines an array of integers with dynamic memory allocation and computes the sum of the array using a function of your own.*/
#include <stdio.h>
#include <stdlib.h>

int computeSum(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = computeSum(arr, n);
    printf("Sum of the array elements: %d\n", sum);

    free(arr);
    return 0;
}