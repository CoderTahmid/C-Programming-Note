#include <stdio.h>

// reversing an array

int main()
{
    int i, j;
    int arra1[] = {1, 2, 3, 4,5,6,7,8,9,10};
    int arra2[10];
    
    for ( i = 9, j = 0 ; i >= 0, j < 10 ; i--, j++ ) {
        arra2[j] = arra1[i];
    }
    
    for ( i = 0 ; i < 10 ; i++ ) {
        arra1[i] = arra2[i];
    }
    
    for ( i = 0 ; i < 10 ; i++ ) {
        printf("%d\n", arra1[i]);
    }
    
}