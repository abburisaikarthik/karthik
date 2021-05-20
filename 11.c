#include <stdio.h>
#include<math.h>

int main()
{
	int a,b,c=1;
	printf("Enter the base:");
	scanf("%d",&a);
	printf("Enter the power value:");
	scanf("%d",&b);
	for (int i = 1; i <= b; i++)
    {
        c*=a;
    }
    
	printf("%d^%d=%d",a,b,c);
	
	return 0;
}