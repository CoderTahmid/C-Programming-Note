#include <stdio.h>

// reversing an array using only one array

int main()
{
    int arra[] = {10,20,30,40,50,60,70,80,90, 100};
    
    int temp, i, j;
    
    for ( i = 0, j = 9 ; i < 5 ; i++, j-- ) {
        temp = arra[i];
        arra[i] = arra[j];
        arra[j] = temp;
    }
    
    for ( i = 0 ; i < 10 ; i++ ) {
        printf("%d\n", arra[i]);
    }
}