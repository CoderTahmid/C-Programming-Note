#include <stdio.h>

/*
print a triangle like example given below 

   *
  ***
 *****
*******
*/

int main() {
    
    int i, n, j, k, l;
    
    printf("n = ");
    scanf("%d", &n);
    
    for ( i = 1, j = 0 ; i <= n ; i++, j++) {
        for ( k = 1 ; k <= n - i ; k++) {
            printf(" ");
        }
        
        for (l = 1 ; l <= i + j ; l++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}