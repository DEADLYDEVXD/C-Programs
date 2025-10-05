/ You are using GCC
#include<stdio.h>

int main()
{
    
    float n,D;
    scanf("%f",&D);
    if(D<50){
        n=(D*10+200);
        printf("%.2f",n);
        
    }
    else if(D>=50 && D<=100){
        n=(D*10+150);
        printf("%.2f",n);
        
    }
    else if(D>100){
        n =(D*10)+(0.05*10)+100;
        printf("%.2f",n);
    }
    else
    {
         n=(D*10)+200;
        printf("%.2f",n);
    }
    return 0;
}