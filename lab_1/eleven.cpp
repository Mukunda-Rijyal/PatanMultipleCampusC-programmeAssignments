/*Write a C program to check if a given integer is positive-even, negative-even, positive-odd, or negative-odd.
*/

#include <stdio.h>

int num;

int main()
{
	printf("Enter a number: \n");
	scanf("%d",&num);
	
	if(num > 0) {
		if((num%2)==0) {
			printf("Positive-even");
		} else {
			printf("Positive-odd");
		}
	} else if(num < 0) {
		if(num%2 == 0) {
			printf("Negative-even");
		} else {
			printf("Negative odd");
		}
	} else {
		printf("It is zero '0'.");
	}
	return 0;
}
