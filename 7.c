#include <stdio.h>
int main()
{
	int a,b,sum;
	a=1;
    b=20;
	printf("Sum of natural  numbers using while loop:\n");
	sum=0;
	while(a<=b)
	{
		sum=sum+a;
		a=a+1;
	}
    sum=0;
	printf("sum of all numbers=%d\n",sum);
	printf("Sum of natural  numbers using for loop:\n");
	for (size_t i = 0; i <=b; i++)
    {
        sum+=i;
        
    }
	printf("sum of all numbers=%d\n",sum);
	printf("Sum of natural  numbers using do while loop:\n");
    int i=0;
    sum=0;
    do
    {
        sum+=i;
        i++;
    } while (i<=b);
	printf("sum of all numbers=%d\n",sum);
    
	return 0;
}