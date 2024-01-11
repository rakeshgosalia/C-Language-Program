#include <stdio.h>

//Write a Program to Swap two variables using the third variable.

void main()
{
	int a, b, c;
	
	printf("A value is: ");
	scanf("%d", &a);
	
	printf("B value is: ");
	scanf("%d", &b);
	
	printf("\nSwap value for A & B");
	
	c=a;
	a=b;
	b=c;
	
	printf("\n\nA value is: %d \nB value is: %d", a,b);
}
