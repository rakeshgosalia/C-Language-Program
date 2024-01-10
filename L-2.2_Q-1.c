#include<stdio.h>
#define A 3.14

void main()
{
      int r;
      float area;
      
      printf("Enter the value of radius:");
      scanf("%d", &r);
      
      area=A*r*r;
      
      printf("The value of area is: %.2f", area);
}
