#include <stdio.h>

// pointer in C programming

int main()
{
    int n = 10;
    int *p = &n;
    /*
    here p stores the address of n, &n diye basically ei variable'r address ta newa hocche
    kintu kotha hocche je
    p jehetu ekta variable eta to normally rekhe dite partam as a variable
    but keno er age ekta asterisk dilam?
    karon hocche
    ei p variable e normal kono value stored hbe nah
    ekhane ekta address store hbeh
    and compiler ke to sheta bujhaite hbe ty nah?
    er jonnei oikhane muloto asterisk dewa hoise
    */

    printf("%d\n", n); // prints the number
    printf("%p\n", &n);
    /*
    output: 0x7fcbe1126c
    So is happening here?
    ekhane muloto oi n variable ta memory'r kon
    address e ache sheita print kortase
    0x7fcbe1126c is a memory address actually

    what is memory address actually!?
    amra jokhon code e kono data store kori
    eta RAM'r ekta specific memeory cell e save hoy
    and shei specific memory cell'r address
    tai hocche eita
    like
    if we imagine the computer's RAM as a big hotel
    each room in this hotel is a memory address
    each room can store dayawhatever it want
    like
    int a = 5
    char ch = 'a';
    ekhn dhori
    0x7fcbe1126c --> ei address e gele 5 ke pawa jabe
    0x7fcbe1128s --> ei address e gele 'a' ke pawa jabe
    and these addresses are in hexadecimal number
    (
        one thing to remember
        whenever you are gonna print an address we will use %p
        karon kono address'r format specifier hocche ei %p
    )
    */
    printf("%p\n", p); // prints the same address as before
    printf("%d\n", *p);
    /*
    output: 10
    eta ke dereferencing
    ekhane oi address e thaka value ta ke print kora hocche
    etai basically dereferencing
    */

    // pointer assignment and dereferencing

    int k = 5;
    int *f = &k;
    *f = 20;                           // this changes the value of k from 5 to 20
    printf("the value of k: %d\n", k); // output: the value of k: 20

    int j = 10;
    int *king = &j;
    printf("j = %p\n", &king); // output: j = 000000B2E3BFFC58
    /*
    so what's goin on here actually?
    ekhane first e j er moddhe ekta value which is 10 store kora hoise
    then king name e ekta variable e er address ta store kora hoise
    now!!
    we are exactly printing the address of king variable
    */

    // Pointer arithmetic

    int age = 22;
    int age2 = 44;
    int *ptrAge = &age;
    int *ptrAge2 = &age2;
    printf("ptrAge before increament: %u\n", ptrAge); // output: ptrAge before increament: 337639932 , %u is for unsigned integer
    ptrAge++;
    printf("ptrAge after increament: %u\n", ptrAge); // output: ptrAge after increament: 337639936
    /*
    So what's goin on here?
    ekhane ptrAge++ korar por the should be increased by one right?
    but emon ta hocche na
    ekhane result bere jacche 4
    mane age 10 thakle pore 14 hoye jacche
    reason is
    int type data 4 bytes of space occupy kore memory te
    whenever we are doing ptrAge++ we are not doing a normal sum
    we are actually adding the datatype with it's previous value
    mane kinda a = a + 4
    or
    a = a + sizeof(int)
    same thing will happen for other datatypes.
    and also ei same jinish ta decreament'r khetreo hbeh

    Note: this result may varie from device to device or compiler to compiler
    amar device or compiler e int type data er jonne 4 byte space

    sizeof(int) = 4 byte = 4 * 8 bit = 32bit
    size(float) = 4 byte
    sizeof(char) = 1 byte
    sizeof(double) = 8 byte
    sizeof(long int) = 4 byte
    sizeof(long long int) = 8 byte
    */

    /*Pointer substruction*/
    printf("age(%u) - age2(%u) = %u\n", ptrAge, ptrAge2, ptrAge - ptrAge2); // output: age(3711957448) - age2(3711957440) = 2
    /*
    ekhane ki hocche?
    first e jei variable ta ache tar address hocche 3711957448
    and 2nd jei variable ta ache tar address hocche 3711957440
    and if you look into it
    ekhane total difference hocche 8 right?
    basically ekhane 2 ta integer different ache (and er jonnei output 2)
    er jonnei ekhane 8 difference dekhacche
    */

    return 0;
}