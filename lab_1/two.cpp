/*Write a C program to 
compute the perimeter and area of 
a rectangle with a length of 7
inches and width of 5 inches.*/

 #include <stdio.h>
 
 int perimeter(int a, int b) 
 {
 	int c = 2 * (a + b);
 	return c;
 }
 
 int area(int a, int b)
 {
 	int c = a * b;
 	return c;
 }
 
 int main()
 {
 	printf("Perimeter: %d\n",perimeter(7 , 5));
	printf("Area: %d",area(7 , 5));
	
	return 0;	
 }
