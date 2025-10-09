// You are using GCC
#include<stdio.h>

int main()
{
    int a;
    char d[20];
    scanf("%d",&a);
    sprintf(d,"%d",a);
    
    for(int i =0; d[i] != '\0'; i++)
    {
        int S = d[i] - '0';
        int D = 9 - S;
        printf("%d",D);
    }

    return 0;
}