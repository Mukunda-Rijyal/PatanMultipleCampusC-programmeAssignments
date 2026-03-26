/*9. WAP to find the sum of an array using a user-defined function.*/
#include <stdio.h>
int sum(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int result = sum(arr, size);
    printf("The sum of the array is: %d\n", result);
    return 0;
}