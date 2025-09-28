#include<stdio.h>

int main()
{
    int d,s;
    float f;
    scanf("%f",&f);
    d = (int)f;
    s = (f-d)*100;
    printf("Rupees: %d\n",d);
    printf("Rupees: %d\n",s);
    return 0;
}