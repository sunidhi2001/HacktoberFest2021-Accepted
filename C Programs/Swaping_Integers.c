#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int a=33;

    int b=12;

    printf("\nBefore swapping value of Num 1 : %d", a);
   printf("\nBefore swapping value of Num 2 : %d", b);
    a=a+b;

    b=a-b;

    a=a-b;

printf("\nAfter swapping value of Num 1 : %d", a);
   printf("\nAfter swapping value of Num 2 : %d", b);
    getch();



    return 0;
}
