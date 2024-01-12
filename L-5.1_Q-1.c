#include <stdio.h>

//Write a Program to find the minimum number from the given 2 numbers using if else.

void main()
{
	int a, b;
	
	printf("Enter A value of the first number: ");
	scanf("%d", &a);
	
	printf("Enter B value of the second number: ");
	scanf("%d", &b);
	
	if(a < b)
	{
		printf("The minimum value is: %d", a);
	}
	else
	{
		printf("The minimum value is: %d", b);
	}
}

