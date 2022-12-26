#include<stdio.h>

void main()
{
	int a;
	int b;
	printf("ENTER FIRST NUMBER = ");
	scanf("%d",&a);
	printf("ENTER SECOND NUMBER = ");
	scanf("%d",&b);
	
	printf("\n------------------------------");
	printf("\n ADDITION = %d",a+b);
	printf("\n SUBSTRACTION = %d",a-b);
	printf("\n MULTIPLICATION = %d",a*b);
	printf("\n DIVISION = %.0f",((float)a/b));
	
	
	
}