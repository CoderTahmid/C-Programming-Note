#include <stdio.h>

// Using prototype in C

float add( float a, float b);
    /*
    ebhabe prototype define na korle 
    program kaj korbe na
    error dekhabe
    error message e bolbe
    add is not defined
    */

int main()
{
    float a, b, c;
    a = 2.7, b = 2.8;
    c = add(a, b);
    printf("%f", c);
    
    return 0;
}

float add( float num1, float num2 ) {

    float sum = num1 + num2;
    return sum;

}