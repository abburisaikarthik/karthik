#include <stdio.h>
int main() {
    int n = 10;
    int a=0;
   
   
   for (int i = 1; i <= n/2; i++)
    {
        if (n%i==0){ a++;}
    }
    
    if (a<3)
    {
        printf("It is Prime number");
    }
    else{
        printf("It isn't Prime number");

    }
    
}