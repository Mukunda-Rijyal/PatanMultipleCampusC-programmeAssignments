/*Write a C program that reads two integers ]
and checks if they are multiples or not.*/

#include <stdio.h>

int a, b;

int main()
{
	printf("Enter two integers: \n");
	scanf("%d%d",&a,&b);
	
	if((a % b) == 0) {
		printf("%d and %d are multiples...\n",a,b);
	} else {
		printf("%d and %d are not multiples...\n",a,b);
	}
	return 0;
}
