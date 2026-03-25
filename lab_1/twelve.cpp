/*Write a C program to print all numbers between 1 to 100 which when divided by a specific number, the remainder will be 3.*/

#include <stdio.h>

int n,i;

int main()
{
	printf("Enter n:\n");
	scanf("%d",&n);
	
	for(i = 1; i <= 100; i++)
	{
		if(i%n == 3) 
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
