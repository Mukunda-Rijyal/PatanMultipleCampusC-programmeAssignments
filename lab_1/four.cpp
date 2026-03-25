/*Write a C program that accepts
 two integers from the user and 
 calculate the sum of the
two integers.*/
#include <stdio.h>

int a, b, sum;

int main() 
{
	printf("Enter two numbers: \n");
	scanf("%d%d",&a, &b);
	
	sum = a + b;
	
	printf("Sum of %d and %d is %d", a, b, sum);
	
	return 0;
}
