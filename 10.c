#include <stdio.h>
int main()
{
    int facto;
	int a,b;
	a=1;
	facto=1;
	printf("Enter any number:");
	scanf("%d",&b);
	for (int a = 1; a <=b; a++)
    {
		facto=facto*a;
		
	} 	
	printf("Factorial of %d is %d",b,facto);
	
	return 0;
}