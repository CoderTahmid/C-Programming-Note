#include<stdio.h>

/*Namota likha using only addition */

int main()
{
    int n = 5, i, j = 5;
    
    for ( i = 1 ; i <= 10 ; i++ ) {
        printf("%d * %d = %d\n", n, i, j);
        j = j + 5;
    }
}