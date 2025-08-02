#include <stdio.h>
#include <stdlib.h>

int main()
{
    // malloc() function 
    /*
    malloc() function basically ja kore
    kichu particular amount of memory amder jonne allocate kore dey in our code 
    */
    int *ptr;
    ptr = (int*) malloc(5 * sizeof(int));
        /*
        so ekhane ki hocche?
        amra malloc() function ke call korlam
        malloc diye amra koto amount of storage nite chacchi?
        it is 
        5 into sizeof(int) = 5 * 4 = 20
        amra malloc diye 20 bytes jayga nite chaacchi
        and malloc amader sheta dise but shei jayga tuk er just pointer dise amader
        and ei pointer ta ke amra typecasting kore int e convert kore nisi ( (int*) )

        now ekhane ei ptr pointer ta point kortase 20 bytes of memory
        ar amra je ei memory ta allocate korsi, ta amra runtime e allocate kortasi
        */
    ptr[0] = 1;
    ptr[1] = 32;
    ptr[2] = 43;
    ptr[3] = 99;
    ptr[4] = 2323; // this how we can set the value of this ptr, just like normal array
    printf("%d\n", ptr[4]); // output: 2323
    

    return 0;
}