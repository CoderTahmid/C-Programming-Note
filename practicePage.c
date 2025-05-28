#include <stdio.h>

int main()
{
    int x = 7, y = 14;

    // Bitwise AND Operator
    int a = x & y;
    printf("a = %d\n", a); // output: 6
        /*
        so what's going on here, let's focus 
        (7)₁₀ = (0111)₂
        (14)₁₀ = (1110)₂
        eihanebasically binary digit gulo niye kaj hbeh
        0111 er last'r digit 1110 er last digit er sathe AND operation hbe
        1st er sathe 1st ta
        2nd tar sathe 2nd tar AND operation hbe
        so if we do this we will get 
        for first digit --> 
        0 AND 1 = 0
        1 AND 1 = 1
        1 AND 1 = 1
        1 AND 0 = 0
        so the final result is 0110 which is 6 in decimal number system
        er jonne basically output 6 
        */

    // Bitwise XOR Operator
    int b = x ^ y;
    printf("b = %d\n", b); // output: b = 9
        /*
        This XOR operator same as and operator
        and e jebhabe kaj hoy ei ^ eo same bhabe kaj hbe
        */

    // Bitwise NOT Operator
    int c = ~x;
    printf("c = %d", c); // output: c = -8
        /*
        So what it does?
        the value of x is 7 right?
        (7)₁₀ = (0111)₂
        but ekhane c'r value hbe ei (0111) er one's compliment
        orthat the new value will be (1000)
        and 
        (1000)₂ = (-8)₁₀
        */
}