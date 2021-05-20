#include<stdio.h>
int main(){
    int i =0;
    printf("Even numbers bw 1-25 are:\n");
    while (i<=25)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
        }
        i++;
    }
    
}