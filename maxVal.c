#include <stdio.h>
#include <stdlib.h>

void maxval();

int main()
{
   
    int a,b,c;
    printf("\nInput three integers : ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    maxval(a,b,c);

}

void maxval(int a,int b,int c)
{
    if(a > b && a > c)
  {
    printf("-> %d is the highest value.\n",a);
  }
  else if (b> c)
  {
     printf("-> %d is the highest value.\n",b);
  }
  else
  {
    printf("-> %d is the highest value.\n",c);
  }
}
