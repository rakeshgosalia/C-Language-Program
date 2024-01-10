//Write C Program to find gross salary by adding % of HRA, DA, and TA of user choice.

#include <stdio.h>

void main()
{
	int hra, da, ta, gs, bs;
	
	//HRA=House Rent Allowance	DA=Dearness Allowance	TA=Transport Allowance	GS=Gross Salary BS=Base Salary
	
	printf("Enter your base salary amount: ");
	scanf("%d", &bs);
	
	hra=(bs*10)/100; //Base Salary by 10% of HRA
	
	printf("Your HRA amount is: %d\n", hra);
	
	da=(bs*5)/100;	//Base Salary by 5% of DA
	
	printf("Your DA amount is: %d\n", da);
	
	ta=(bs*8)/100;	//Base Salary by 8% of TA
	
	printf("Your TA amount is: %d\n\n", ta);
	
	gs=bs+hra+da+ta;	//Total Gross Salary amount
	
	printf("Your gross salary is: %d\n", gs);
	
}
