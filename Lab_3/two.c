/*2. WAP to find the smallest element of an array using dynamic memory allocation and pointers.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, min;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("The smallest element in the array is: %d\n", min);
    free(arr);
    return 0;
}
