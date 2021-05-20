#include <stdio.h>
int main()
{
	int a,b,sum;
	a=0;
	printf("enter any number: ");
	scanf("%d",&b);
	while(a<=b)
	{
		if(a%2==1)
		{
			printf("%d ",a);
		}
		a=a+1;
	}
	return 0;
}