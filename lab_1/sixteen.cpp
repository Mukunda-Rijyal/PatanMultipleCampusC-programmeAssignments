/*Write a C program to print numbers from
 1 to n, its square, and its cube on a single line,
  starting from 1 to n lines. 
  Accept the number (i.e., n, an integer) from the user.
*/
#include <stdio.h>

int n,i,sq,cb;

int main()
{
	printf("Enter n number: ");
	scanf("%d",&n);
	
	printf("\nNumber\tSquare\tCube\n");
	
	for(i = 1; i <= n; i++) {
		sq = i * i;
		cb = i * i * i;
		
		printf("%d\t%d\t%d\n",i,sq,cb);
	}
	
	return 0;
}
