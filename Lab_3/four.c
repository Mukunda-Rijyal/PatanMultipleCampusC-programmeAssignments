/*4. Write a program in C to find the sum of rows and columns of a matrix.*/
#include <stdio.h>
int main()
{
    int m, n, i, j;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    printf("Enter the elements of the matrix: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Sum of rows:\n");
    for (i = 0; i < m; i++)
    {
        int sum = 0;
        for (j = 0; j < n; j++)
        {
            sum += matrix[i][j];
        }
        printf("Row %d: %d\n", i + 1, sum);
    }

    printf("Sum of columns:\n");
    for (j = 0; j < n; j++)
    {
        int sum = 0;
        for (i = 0; i < m; i++)
        {
            sum += matrix[i][j];
        }
        printf("Column %d: %d\n", j + 1, sum);
    }
    return 0;
}
