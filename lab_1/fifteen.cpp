/*Write a program that reads two numbers 
and divide the first number by second number. If the division is not possible, then print "Division is not possible".*/

#include <stdio.h>

int a,b;
double div;

int main() 
{
	printf("Enter value for a / b: ");
	scanf("%d%d",&a,&b);
	
	if(b == 0) {
		printf("Division is not possible");
	} else {
		div = (double)a / b;
		printf("%d / %d is %.2f.",a,b,div);
	}
	return 0;
}
