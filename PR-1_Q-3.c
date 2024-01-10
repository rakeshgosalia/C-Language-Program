//Write C Program to find the third angle of a right triangle if two other angles are given.

#include <stdio.h>

void main()
{
	int a, b, c, t=180;
	
	printf("Enter the first angel A is: ");
	scanf("%d", &a);
	
	printf("Enter the second angel B is: ");
	scanf("%d", &b);
	
	c=t-a-b;
	
	printf("\nThe third angel C is: %d", c);
}
