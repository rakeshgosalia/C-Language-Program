#include <stdio.h>

void main()
{
	float w, l, a;
	
	printf("Enter the value of width:");
	scanf("%f", &w);
	
	printf("Enter the value of length:");
	scanf("%f", &l);
	
	a=w*l;
	
	printf("The area of a rectangle is %.2f", a);
}
