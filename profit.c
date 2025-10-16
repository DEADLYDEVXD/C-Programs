// Date: 16-10-2025
// Profit Loss basic Program.
#include<stdio.h>

int main()

{
    float a,b;
    scanf("%f\n",&a);
    scanf("%f\n",&b);
    
    if(b>a)
    {
        float pr= b-a;
        printf("Ramu earns %.2f profit by selling an item.",pr);
    }
    else if(b<a)
    {
        float pr= a-b;
        printf("Ramu incurred %.2f loss on selling item.",pr);
    }
    else
    {
        printf("Ramu doesn't get any loss and profit on selling item.");
    }
    
    return 0;
}