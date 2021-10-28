#include<stdio.h>
#include<math.h>

#define PI 3.141

int main(){
    float radius, area;
    printf("Enter radius of circle\n");
    scanf("%f", &radius);
    /* Area of Circle = (PI * Radius * Radius) */
    area = PI*pow(radius,2);
    printf("Area of circle : %0.4f\n", area);
    return 0;
}
