#include <stdio.h>

int main()
{

    /*
    The difference between %f and %lf :
    they both store decimal (floating-point)
    but the main difference is precision and memory usage.

    float(%f) uses 4bytes
    double(%lf) uses 8bytes

    double(%lf) gives more accurate output than float(%f)
    */

    float a = 3.1415926535;
    double b = 3.1415926535;

    printf("The float value : %.10f \n", a);   // output : The float value : 3.1415927410
    printf("The double value : %.10lf \n", b); // output : The double value : 3.1415926535

    /*
    as we can see in the float value
    it looses precision after 6-7 digits
    made something different output
    but in the double value
    it is ok, the value is same as the value of b
    */

    return 0;
}
