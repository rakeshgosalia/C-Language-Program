#include <stdio.h>

void main()
{
	float b, h;
	float area;
	
	printf("Enter the value of base:");
	scanf("%f", &b);
	
	printf("Enter the value of height:");
	scanf("%f", &h);
	
	area=b*h/2;
	
	printf("The area of a triangle is %.2f", area);
}
