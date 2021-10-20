#include <stdio.h>
#include <conio.h>
#define PI 3.14
int main()
{
float radius, area , perimeter;
    printf("Enter radius of circle\n");
    scanf("%f", &radius);
    // Area of Circle = PI x Radius X Radius
    area = PI*radius*radius;
    printf("Area of circle : %0.2f\n", area);
    // Perimeter of a Circle
     perimeter = 2 * PI * radius;
   printf("\nPerimeter is  : %.2f \n", perimeter);
   // if area is greater than perimeter
    if(area>perimeter){
        printf("\nArea is Greater than Perimeter\n");
    }
    // if perimeter is greater than area
    else{
        printf("\nPerimeter is Greater than Area\n");
    }
getch();
return 0;
}

