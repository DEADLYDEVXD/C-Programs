// its been more then 90min i am stuck at simple simple problem :(


// come on codes are easy but not easy to understand fast 


#include<stdio.h>

int main()
{
    int n,i,j=1;
    long long sum=0,fact;
    scanf("%d",&n);
    
    for (i=1;i<=n;i++)
    {
      fact  =1;
      for(int j=1;j<=i;j++)
      {
        fact *= j;
      }
      sum += fact;
    }
              
    printf("%lld",sum);
    return 0;
}