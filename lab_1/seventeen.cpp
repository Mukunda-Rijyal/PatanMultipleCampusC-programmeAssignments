/*Write a C program that accepts the 
principal amount, interest rate, and time, 
and computes the simple interest.*/

#include <stdio.h>

int main() {
	int principle, timeinYr, rate;
	float simpleInterest;
	
	printf("Enter principle, time in year, and rate.\n");
	scanf("%d%d%d",&principle,&timeinYr,&rate);
	
	simpleInterest = (principle * timeinYr * rate) / 100;
	
	printf("Simple Interest: %.2f.",simpleInterest);
	
	return 0;
} 
