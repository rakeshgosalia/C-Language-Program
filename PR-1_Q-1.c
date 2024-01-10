//Write a Program to convert temperature from degrees Celsius to Fahrenheit.

#include <stdio.h>

void main()
{
	float C, F;	//C=Celsius	F=Fahrenheit
	
	printf("The temperature in Celcius is: ");
	scanf("%f", &C);
	
	F=(C*9/5)+32;
	
	printf("The temperature in Fahrenheit: %.2f", F);
}
