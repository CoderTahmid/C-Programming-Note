#include <stdio.h>

// print a reverse right-shifted triangle 
/*
****
 ***
  **
   * 
*/

int main() {
    
    int i, n, j, k;
    
    printf("n = ");
    scanf("%d", &n);
    
    for ( i = n ; i > 0 ; i--) {
        for (k = 1 ; k <= n - i ; k++) {
            printf(" ");
        }
        
        for ( j = 1 ; j <= i ; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}