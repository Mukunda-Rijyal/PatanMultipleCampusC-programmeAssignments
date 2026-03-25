/*Write a C program to convert a given integer
(in days) to years, months, weeks and days.
 [Assume that all months have 30 days and all
 years have 365 days.]
*/

#include <stdio.h>

int indays, years, months, weeks, days;

int main()
{
	printf("Enter indays: ");
	scanf("%d", &indays);

	years = indays / 365;
	months = (indays % 365) / 30;
	weeks = ((indays % 365) % 30) / 7;
	days = ((indays % 365) % 30) % 7;

	printf("Years  = %d\n", years);
	printf("Months = %d\n", months);
	printf("Weeks  = %d\n", weeks);
	printf("Days   = %d\n", days);

	return 0;
}
