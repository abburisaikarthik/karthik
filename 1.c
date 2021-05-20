#include<stdio.h>
int main(){
    //For loop
    printf("Even numbers from 1-50 using for loop are :\n");
    for (int i = 0; i <= 50; i+=2)
    {
        printf(" %d ",i);
    }
    printf("\nOdd numbers from 1-50 using for loop are :\n");
    for (int i = 1; i <= 50; i+=2)
    {
        printf(" %d ",i);
    }
    //while loop
    printf("\nEven numbers from 1-50 using while loop are :\n");
    int j=0;
    while (j<=50)
    {
        printf(" %d ",j);
        j+=2;
    }
    printf("\nOdd numbers from 1-50 using while loop are :\n");
    int k=1;
    while (k<=50)
    {
        printf(" %d ",k);
        k+=2;
    }
    //do while
    printf("\nEvennumbers from 1-50 using do while loop are :\n");
    int g=0;
    do
    {
        printf(" %d ",g);
        g+=2;
    } while (g<=50);
    printf("\nOdd numbers from 1-50 using do while loop are :\n");
    int h=1;
    do
    {
        printf(" %d ",h);
        h+=2;
    } while (h<=50);
    
    
    
}