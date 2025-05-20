#include <stdio.h>

int main()
{
    // bitwise operator
    int x = 7, y = 14;
    int z = x & y;
    printf("%d", z); // output: 6
    /*
    so what's going on here, let's focus 
    (7)₁₀ = (0111)₂
    (14)₁₀ = (1110)₂
    eihanebasically binary digit gulo niye kaj hbeh
    0111 er last'r digit 1110 er last digit er sathe and operation hbe
    1st er sathe 1st ta
    2nd tar sathe 2nd tar and operation hbe
    so if we do this we will get 
    for first digit --> 
    0 and 1 = 0
    1 and 1 = 1
    1 and 1 = 1
    1 and 0 = 0
    so the final result is 0110 which is 6 in decimal number system
    er jonne basically output 6 
    */
}