#include <stdio.h>

// difference between post-increment and pre-increment

int main()
{
    // pre-increment
    int a = 5;
    int b = ++a;
    printf("%d\n", b); // output: 6
        /*
        what's going on here basically?
        ekhane ja hocche ta holo
        prothome a ke define kora hoise jar value 5
        and b er value ++a set kora hoise
        to jokhon ami ++a use kortasi
        tokon basically
        age a er value ta 1 bartase then er man ta (jeta kina 1 bere 6 hoye gese already) used hocche
        orthat mone rakhte hbe je
        age pre-increment e age value barbe then used hbe
        */

    // post-increment
    int c = 5;
    int d = c++;
    printf("%d\n", d); // output: 5
    printf("%d", c); // output: 6
        /*
        post-increment e age value ta use hbeh
        then 1 barbe
        ekhane prothom printf e value ta 5 chilo
        karon hocche je post-increment
        age c er original value ta used hoise
        then er man 1 barse
        kintu abar next printf e kintu  thik e 6 print hoise
        karon tokhon c er man already bere gese
        */

}