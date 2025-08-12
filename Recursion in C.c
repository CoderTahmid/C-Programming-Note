#include <stdio.h>

// recursion in C

int fac(int n) {
    if ( n == 0 ) {
        return 1;
    } else {
        return n * fac(n - 1);
    }
}

int main(){
    int num = 5;
    
    int factorial = fac(5);
    
    /*
    So whatsgoing on here?
    how come the value of factorial become 120?
    mane calculation ta kibhabe holo?
    let's breakdown it!!
    
    fac(5)
    = 5 * fac(4) 
    = 5 * ( 4 * fac(3) ) [jehetu fac(4) = 4 * fac(3)]
    = 5 * ( 4 * ( 3 * fac(2) ) ) 
    = 5 * ( 4 * ( 3 * ( 2 * fac (1) ) ) ) 
    = 5 * ( 4 * ( 3 * ( 2 * ( 1 * fac(0) ) ) ) )
    = 5 * ( 4 * ( 3 * ( 2 * ( 1 * 1 ) ) ) ) [ jehetu fac(0) will return 1 ]
    = 5 * ( 4 * ( 3 * ( 2 * 1 ) ) ) 
    = 5 * ( 4 * ( 3 * 2 ) )
    = 5 * ( 4 * 6 )
    = 5 * 24
    = 120
    
    exactly this is how it works
    */
    
    printf("%d! = %d", num, factorial);
}