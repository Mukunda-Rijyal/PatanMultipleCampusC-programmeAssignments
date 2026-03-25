/* Write a C program to calculate the distance between two points */

#include <stdio.h>
#include <math.h>

int main()
{
    int x1, x2, y1, y2;
    float distance;

    printf("Enter X-coordinates (x1 x2): ");
    scanf("%d %d", &x1, &x2);

    printf("Enter Y-coordinates (y1 y2): ");
    scanf("%d %d", &y1, &y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distance between the two points = %.2f", distance);

    return 0;
}
