// week monthes day
// 100 
//100%7 == 0 if elas 100%7 remains to Nth week

#include<stdio.h>

int main() 
{
    int a,s,n;
    scanf("%d",&a);
    if( a%7 == 0)
    {
        n = a/7; 
        ("Its Been %d weeks.",n);
    }
    else
    {
        s = (int)a/7;
        n = (a%7);
        printf("Its Been %d weeks %d Days.",s,n);
    }
    
    return 0;
}
