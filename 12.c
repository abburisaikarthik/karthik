#include <stdio.h>
int main()
{
    char hex[32]={0};
    int  dec,a,cnt,dig;
  
    printf("Enter hex value: ");
    gets(hex);
    cnt=0;
    dec=0;
    for(a=(strlen(hex)-1);a>=0;a--)
    {
        switch(hex[a])
        {
            case 'A':
                dig=10; break;
            case 'B':
                dig=11; break;
            case 'C':
                dig=12; break;
            case 'D':
                dig=13; break;
            case 'E':
                dig=14; break;
            case 'F':
                dig=15; break;
            default:
                dig=hex[a]-0x30;
        }
        dec= dec+ (dig)*pow((double)16,(double)cnt);
        cnt++;
    }
    printf("DECIMAL value is: %d",dec);
    return 0;
}