// You are using GCC
#include<stdio.h>

// BROOO WHY ITS RIGHT BRUH THIS WASNT SUPPOS TO BE RIGHT WTF!?!
// This site sucks bruh my right code is wrong and wrong right!?! Bruh wtf?


int main()
{
    int A,I,C;
    scanf("%d",&A);
    scanf("%d",&I);
    scanf("%d",&C);
    if (A<21 || A>60 || I<300000)
    {
        
    }
    
    if (I>=300000 && I<=10000000)
{
        if (A>=21 && A<60)
    {
        if(C>=750 && C<=850)
        {
            printf("EXCELLENT - ELIGIBLE");
        }
        else if (C>=700 && C<=749)
        {
            printf("GOOD - ELIGIBLE");
            
        }
        else if (C>=650 && C<=699)
        {
            printf("FAIR - ELIGIBLE");
        }
        else if (C>=550 && C<=649)
        {
            printf("POOR - NOT ELIGIBLE");
            
        }
        else if(C<500)
        {
            printf("NOT APPLICABLE");
        }
    }
    else
    {
        printf("NOT APPLICABLE");
    }
}
else 
{
    printf("NOT ELIGIBLE");
}
    return 0;
}