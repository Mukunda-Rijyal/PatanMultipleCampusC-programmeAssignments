/*Write a C program 
to reverse and print a given number.*/

#include <stdio.h>
int main()
{
	int num,temp = 0;
	
	printf("Enter the number to reverse: ");
	scanf("%d",&num);
	
	while(num != 0) 
	{
		temp = (temp * 10) + (num % 10);
		num /= 10;
	}
	printf("Reverse is %d.",temp);
	
	
	return 0;
}
