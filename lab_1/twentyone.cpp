/*Write a C program that reads an integer between
 1 and 12 and prints the month of the year in English.*/
 
 /*January, February, March, April, May, June, 
 July, August, September, October, November, December*/
 
 #include <stdio.h>
 int main() 
 {
 	int n;
 	
 	printf("Enter the number between 1 - 12: \n");
 	scanf("%d",&n);
 	
 	switch(n) {
	 	case 1:
	 		printf("January");
	 		break;
	 	case 2:
	 		printf("February");
	 		break;
	 	case 3:
	 		printf("March");
	 		break;
	 	case 4:
	 		printf("April");
	 		break;
	 	case 5:
	 		printf("May");
	 		break;
	 	case 6:
	 		printf("June");
	 		break;
	 	case 7:
	 		printf("July");
	 		break;
	 	case 8:
	 		printf("August");
	 		break;
	 	case 9:
	 		printf("September");
	 		break;
	 	case 10:
	 		printf("October");
	 		break;
	 	case 11:
	 		printf("November");
	 		break;
	 	case 12:
	 		printf("December");
	 		break;
	 	default:
	 		printf("Enter valid number.");
	 }
	 return 0;
 }
