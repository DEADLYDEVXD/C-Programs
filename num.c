#include<stdio.h>
int main()
{
    int a,c;
    float d;
    scanf("%d",&a);
    if (a<=100)
    {
        d = 5*a;
        printf("%.1f",d);
        
    }
    else if(a<=200 && a>=101)
    {
        d = 7*a;
        if(d>1500)
        {
            d = d+(d*10)/100;
            printf("%.1f",d);
        }
        else 
        {
            printf("%.1f",d);
        }
    }
    else if(a<=300 && a>=201)
    {
        d = 10*a;
       // printf("%.1f",d);
       if(d>1500)
        {
            d = d+(d*10)/100;
            printf("%.1f",d);
        }
        else 
        {
            printf("%.1f",d);
        }
    }
    else
    {
        d = 12*a;
      //  printf("%.1f",d);
      if(d>1500)
        {
            d = d+(d*10)/100;
            printf("%.1f",d);
        }
        else 
        {
            printf("%.1f",d);
        }
    }
    return 0;
}