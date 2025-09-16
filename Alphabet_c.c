#include<stdio.h>

int main()
{
    char a,g;
    scanf("%c",&a);
  //  d == 'a';
    //f == 'z';
    //if (a == q,a ==w,a ==e,a ==r,a ==t,a ==y,a ==u,a ==i,a ==o,a ==p,a ==a,a ==s,a ==d,a ==f,a ==g,a ==h,a ==j,a ==k,a ==l,a ==z,a ==x,a ==c,a ==v,a ==b,a ==n,a ==m,a ==Q,a ==W,a ==E,a ==R,a ==T,a ==Y,a ==U,a ==I,a ==O,a ==P,a ==A,a ==S,a ==D,a ==F,a ==G,a ==H,a ==J,a ==K,a ==L,a ==Z,a ==X,a ==C,a ==V,a ==B,a ==N,a ==M)
   // g = [d,f]
    if ((a >='a' && a <='z') || (a >='A' && a<='Z'))
    {
        printf("Alphabetical Letter");
    }
    else
    {
        printf("Special Character");
    }
    return 0;
}