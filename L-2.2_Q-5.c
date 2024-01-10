#include <stdio.h>
#define p 3.14

void main()
{
	int r;
	float area;
	
	printf("Enter the value of radius: ");
	scanf("%d", &r);
	
	area=2*p*r;
	
	printf("The Perimeter of the circle is: %0.2f", area);
}
