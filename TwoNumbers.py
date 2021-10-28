#include <stdio.h>
int main()
{
    unsigned long long int a,b,n,t,max,min;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&a,&b,&n);
          if(n%2==1||n==1)
          {
              a=a*2;
          }
           if(a>b)
           {
              printf("%lld\n",a/b);
           }
           else
           {
               printf("%lld\n",b/a);
           }
         
    }
    return 0;
}
