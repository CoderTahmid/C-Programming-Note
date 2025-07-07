#include <stdio.h>

int main()
{
    int arra[4][3] = {
        {1, 2, 3},
        {3, 4, 6},
        {7, 5, 7},
        {9, 10, 12}
    };

    printf("%d\n", arra[0][1]); // output: 2
    printf("%d\n", arra[3][1]); // output: 10
    /*
    Basically ja hocche
    first index ta array'r row ke nirdesh kore
    first index 0 mane fisrt row 1

    and 2nd index ta nirdesh kore hocche oi row'r elemeng gular index
    mane usually 1D array te bepar ta jebhabe hoito arki
    */
}