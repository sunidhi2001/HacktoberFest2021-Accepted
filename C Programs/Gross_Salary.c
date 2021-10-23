#include <stdio.h>
#include <conio.h>

int main()
{
    float basic, gross, da, hra;

    /* Reads basic salary of employee */
    printf("Enter basic salary of an employee: ");
    scanf("%f", &basic);


    /*
     * Calculates D.A and H.R.A according to specified conditions
     */
    if(basic <= 4000)
    {
        da = basic * 0.20;
        hra = basic * 0.10;
    }
    else if(basic <= 8000)
    {
        da = basic * 0.60;
        hra = basic * 0.20;
    }
    else if(basic<=12000)
    {
        da = basic * 0.70;
        hra = basic * 0.25;
    }
    else
{
da= basic * 0.80;
hra= basic * 0.30;
}

    /* Calculates gross salary */
    gross = basic + hra + da;

    printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);

    return 0;
}
