/*Write a C program that accepts three integers and find the maximum of three.*/

#include <stdio.h>

int a, b, c, max;

int findMax(int a, int b, int c) 
{
	 if(a > b && a > c) {
	 	return a;
	 }
	 else if(b > c && b > a) {
	 	return b;
	 }
	 else {
	 	return c;
	 }
}

int main() {
	
	printf("Enter 3 numbers: \n");
	scanf("%d%d%d",&a,&b,&c);
	
	max = findMax(a, b, c);
	
	printf("%d is greater among %d, %d and %d",max, a, b, c);
	return 0;
}
