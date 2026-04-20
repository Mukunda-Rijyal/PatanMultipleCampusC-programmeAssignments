/*5. Write a program in C to display the lower triangular elements of a given square matrix*/
#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter the elements of the matrix: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The lower triangular elements of the matrix are:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
