/*Write a C program that 
accepts a distance in centimeters 
and prints the corresponding value 
in inches.*/

#include <stdio.h>

int main()
{
	const float def = 2.54;
	int c;
	float i;
	
	printf("Enter distance in centimeter: ");
	scanf("%d",&c);
	
	i = c / def;
	
	printf("\n%d centimer equails %.2f inches...",c,i);
	
	return 0;
}
