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

    // calloc() function
    /*
    calloc means continous alloction
    calloc() e ekta bishoy hocche je
    amra jokhon calloc diye kichu memory nibo tokhon ogula by defaul first e 0 thakbe each values
    like
    9 byte nilam 
    3 ta integer
    in initial moment
    n[0] = 0
    n[1] = 0
    n[2] = 0
    
    calloc() syntax
    calloc(how many locations, sizeof(data type))
    first parameter e dite hbe je koyta location lgbe
    and 2nd parameter e data type's size dite hbe
    */
    int *ptr1;
    ptr1 = (int*) calloc(4, sizeof(int)); // calloc o void return kore, ty etake int e convert kore nite hbe

    ptr1[1] = 10;
    ptr1[2] = 20;
    printf("ptr[0] = %d\tptr[1] = %d\n", ptr1[0], ptr1[1]); // output: ptr[0] = 0      ptr[1] = 10

    // free() function
    /*
    kahini hocche je
    let amra program'r shuru te kono ekta variable use korsi 'a'
    program ta onek boro
    just first 2 line ei a variable ta use hoise
    pore ar use hoy nai

    to amader compiler enough smart houay she oi variable'r memory address ta free kore dey.
    mane khali kore dey jate onno konobhabe oitake use kora jay
    but jokhon amra kono memory dynamically allocate kore dibo
    tokhon compiler sheta ke ar free kore dey na.
    whole program jurei oi address e data theke jay.
    so as a programmer we should free the address
    */
    free(ptr);
    free(ptr1);

    // realloc() function
    /*
    sometimes we may need to change the allocated memory size
    like
    10 ta space allocate korlam
    but pore dekha gelo je aro 5 ta new add kora lgbe
    tokhon amra ei realloc() use korbo
    ar jodi abar 5 ta komaite hoy
    tao ei realloc() use korbo
    */
    int *ptr2;
    ptr2 = (int*) calloc(3, sizeof(int));

    ptr2[0] = 99;
    ptr2[1] = 98;
    ptr2[2] = 97;

    printf("%d\n%d\n%d\n", ptr2[0], ptr2[1], ptr2[2]);

    ptr2 = realloc(ptr2, 5); // ekhn ekhane ptr2 er jonne allocated memory space 3 bytes theke 5 bytes hoye gese

    return 0;
}