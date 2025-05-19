#include <stdio.h>

// HCF of 2 numbers

int main()
{

    int a, b, i, k = 0;

    printf("Enter num1: ");
    scanf("%d", &a);

    printf("Enter num2: ");
    scanf("%d", &b);

    if (a > b)
    {
        for (i = 1; i <= b; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                if (i > k)
                {
                    k = i;
                }
            }
        }
        printf("The HCF of these numbers is %d", k);
    }
    else
    {
        for (i = 1; i <= a; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                if (i > k)
                {
                    k = i;
                }
            }
        }
        printf("The HCF of these numbers is %d", k);
    }

    return 0;
}