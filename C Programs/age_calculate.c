#include <stdio.h>
#include<conio.h>
int main()
{
 int  age,sec,hours,mins;
void secCount(int*second, int*hours, int*min, int*sec);
int main()
{
   int sec=0, min=0;
    int hours=0, seconds=0;
             {
printf(" enter time in seconds");
scanf("%d",&seconds);
secCount(&seconds, &hours, &min, &sec);
printf("the time is equals to %d hours %d min, %d seconds",hours,min,sec);
}
return 0;
}
void secCount(int*seconds, int*hours, int*min, int*sec)
{
Int days;
Int s=0;
days=*seconds/86400;
s%=86400;
*hours=s/3600;
s/=3600;
*min=s/60;
*sec=%s60;
}
