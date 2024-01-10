#include <stdio.h>

void main()
{
	int p, r, t;
	float i;
	
	printf("Enter the principal amount:");
	scanf("%d", &p);
	
	printf("Enter the rate per annum:");
	scanf("%d", &r);
	
	printf("Enter the time(year):");
	scanf("%d", &t);
	
	i=p*r*t/100;
	
	printf("Interest is:%.2f", i);
}
