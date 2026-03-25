/*Write a C program to read the coordinates (x, y) 
(in the Cartesian system) and find the quadrant 
it belongs to.

First Quadrant (I)	x > 0 and y > 0
Second Quadrant (II)	x < 0 and y > 0
Third Quadrant (III)	x < 0 and y < 0
Fourth Quadrant (IV)	x > 0 and y < 0

*/

#include <stdio.h>

int x,y;

int main() 
{
	printf("Enter coordinates x,y: \n");
	scanf("%d%d",&x,&y);
	
	if(x > 0 && y > 0) {
		printf("First Quadrant.");
	} else if(x < 0 && y > 0) {
		printf("Second Quadrant.");
	} else if(x < 0 && y < 0) {
		printf("Third Quadrant.");
	} else if(x > 0 && y < 0) {
		printf("Fourth Quadrant.");
	} else {
		printf("Origin");
	}
	return 0;
}
