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
    printf("c = %d\n", c); // output: c = -8
        /*
        So what it does?
        the value of x is 7 right?
        (7)₁₀ = (0111)₂
        but ekhane c'r value hbe ei (0111) er one's compliment
        orthat the new value will be (1000)
        and 
        (1000)₂ = (-8)₁₀
        */

    // Right Shift Operator
    int d = x >> 1;
    printf("d = %d\n", d); // output: d = 3
        /*
        so ekhane ki hocche?
        the value of x is 7
        (7)₁₀ = (0111)₂
        jehetu ekhane right shift only one dewa hosie
        tai
        0111'r right theke only ekta digit cut off hbe
        so baki thake 0011
        and (0011)₂ = (3)₁₀
        */
    int e = x >> 2; // we can also do this in this way, tahole ekhane 2 ta digit cut off hbe arki
    printf("e = %d\n", e); // output: e = 1
        /*
        ekhane exactly ager motoi kaj hoise
        just 2 ghor dan theke shift hoise arki 
        */

    // Left Shift Operator
    int f = x << 1;
    printf("f = %d\n", f); // output: f = 14
        /*
        So what's going on here?
        (7)₁₀ = (00000111)₂
        ebar ei digit ta ke 1 ghor left e shift kora hbeh
        orthat bishoy ta emon hbe
        00000111 theke 00001110
        and (00001110)₂ = (14)₁₀
        */

    // Bitwise OR Operator
    int g = x | y;
    printf("g = %d", g); // output: g = 15
        /*
        It's no different then the AND operation
        AND e jemon hoito 
        thik temon e ekhane hbe arki
        */
}