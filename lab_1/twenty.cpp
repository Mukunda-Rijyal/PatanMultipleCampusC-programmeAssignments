/*Write a C program that accepts 
a positive integer less than 500 and prints 
out the sum of the digits of that number.*/
/*n(n+1) / 2*/

#include <stdio.h>
int main()
{
	int n,sum;
	
	printf("Enter any number less than 500.");
	scanf("%d",&n);
	
	if(n < 500)
	{
		sum = (n*(n+1)) / 2;
		printf("The sum is: %d",sum);
	} 
	else {
		printf("Please enter number less than 500.");
	}
	
	return 0;
}
