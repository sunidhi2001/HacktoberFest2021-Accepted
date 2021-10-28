// This C program is used to find hcf of two numbers

#include <stdio.h>

int gcd(int x, int y)
{
    int ans;
    int min = (x <= y) ? x : y;
    for (int i = 1; i <= min; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            ans = i;
        }
    }
    return ans;
}

int main()
{
    int a, b;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    int hcf = gcd(a, b);
    printf("The HCF of  %d and %d is %d\n", a, b, hcf);
    return 0;
}
