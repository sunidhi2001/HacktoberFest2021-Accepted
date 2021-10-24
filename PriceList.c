#include <stdio.h>
#include <stdlib.h>

int main()
{
    char my_index[]="22789"; //Declare char array for index number.
    printf("My_Index: %s\n",my_index); //print index number
    float array[10];
    float sum=0;
    float min,max;
    for(int i=0; i<10; i++)
        {
            printf("%d. price : ",i+1);
            scanf("%f",&array[i]);
            sum = sum + array[i];
        }
     min = array[0];
     max = array[0];

    for (int j = 0; j < 10; j++)
    {
        if (array[j] < min)
        {
            min = array[j];
        }

        if (array[j] > max)
        {
            max = array[j];
        }
    }
    printf("prices of all is %.2f\n", sum);
    printf("highest price is %.2f\n", max);
    printf("lowest price is %.2f\n", min);

    printf("My_Index: %s\n",my_index); //print index number
}
