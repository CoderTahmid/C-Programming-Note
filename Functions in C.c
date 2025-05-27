#include <stdio.h>

// functions in C Programming
/*
This is how we define a function and pass it's parameter
*/

int add( float num1, float num2 ) {

    float sum = num1 + num2;
    return sum;

}

int main()
{
    float a, b, c;
    a = b = 2.5;
    c = add(a, b);
    printf("%f", c);
    
    return 0;
}