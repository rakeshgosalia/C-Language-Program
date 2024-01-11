#include <stdio.h>

//Write a Program to Swap two variables without using a third variable.

void main()
{
	int a, b;
	
	printf("A value is: ");
	scanf("%d", &a);
	
	printf("B value is: ");
	scanf("%d", &b);
	
	printf("\nSwap value for A & B");
	
	a=a*b;
	b=a/b;
	a=a/b;
	
	printf("\n\nA value is: %d \nB value is: %d", a,b);
}
