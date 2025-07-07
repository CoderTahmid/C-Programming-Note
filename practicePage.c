# include <stdio.h>

// Beecrowd 1165 - Prime Number

int main () {

    int n, i, k, j, count = 0;
    
    scanf("%d", &n);
    
    for ( i = 0 ; i < n ; i++){
        scanf("%d", &k);
        
        for ( j = 1 ; j <= k ; j++) {
            if (k % j == 0) {
                count++;
            }
        }
        
        if (count == 2) {
            printf("%d eh primo\n", k);
            count = 0;
        } else {
            printf("%d nao eh primo\n", k);
            count = 0;
        }
        
    }
    
    return 0;
}