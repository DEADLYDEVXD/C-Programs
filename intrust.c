
#include<stdio.h>

int main() 
{
    int p,r,t;
    float total;
    
    printf("Enter The Value Of P.\n");
    scanf("%d",&p);
    
//    int r;
    
    printf("Enter The Value Of r.\n");
    scanf("%d",&r);
    
    
    printf("Enter The Value Of T\n");
    scanf("%d",&t);
    //total =( (p*r*t)/100);
    total = (float)p*r*t/100;
    printf("The Simple Intrest is %.2f",total);
    
    return 0;
}