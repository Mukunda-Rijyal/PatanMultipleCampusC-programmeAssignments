/*Write a C program to compute the perimeter and area of a circle with a radius of 6
inches.*/

#include <stdio.h>
#define PI 3.14

int r;
float perimeter, area;

int main()
{
	printf("Enter the radius: ");
	scanf("%d",&r);
	
	perimeter = 2 * PI * r;
	area = PI * r * r;
	
	printf("\nArea: %.2f\tPerimeter: %.2f",area, perimeter);
	
	return 0;
}
