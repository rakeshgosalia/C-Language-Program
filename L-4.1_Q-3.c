#include <stdio.h>

//Write a Program to find the formula's answer (x+y)^2.

void main()
{
	int x, y, z;
	
	printf("Enter value of X is: ");
	scanf("%d", &x);
	
	printf("Enter value of Y is: ");
	scanf("%d", &y);
	
	z=(x+y)*(x+y);
	
	printf("\nZ value is: %d", z);
}
