#include <stdio.h>

// multiplication table using only add operation

int main()
{
    int n, i, m, o = 0;

    for (n = 1; n <= 20; n++)
    {
        for (i = 1; i <= 10; i++)
        {
            printf("%d * %d = %d\n", n, i, n + o);
            o = o + n;
        }
        o = 0;
        printf("\n");
    }

    return 0;
}