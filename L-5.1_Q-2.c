#include <stdio.h>

//Write a Program to find if a given number is neutral or not using a ladder if else.

void main()
{
	int a;
	
	printf("Enter A value of the first number: ");
	scanf("%d", &a);
	
	if(a < 0)
	{
		printf("This number is Negative");
	}
	else if(a == 0)
	{
		printf("This number is Neutral");
	}
	else
	{
		printf("This number is Positive");
	}
}

