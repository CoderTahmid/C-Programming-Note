#include<stdio.h>

int main()
{
   int a;
   a = 1000;
   printf("The value of a is %d\n", a); //output: The value of a is 1000
   
   a = -21000;
   printf("The value of a is %d\n", a); //output: The value of a is -21000
   
   a = 100000000;
   printf("The value of a is %d\n", a); //output: The value of a is 100000000
   
   a = -100000000;
   printf("The value of a is %d\n", a); //output: The value of a is -100000000
   
   a = 100020004000503;
   printf("The value of a is %d\n", a); //output: The value of a is -1194388745
   
   a = -4325987632;
   printf("The value of a is %d\n", a); //output: The value of a is -31020336
   
   /*
   We can see je ei last 2 ta printf e "a" er value
   thik bhabe print hoynai
   there's a reason behind it
   ekhane amra "a" ke int type hishabe set korsi right?
   int type variable'r jonno ekta limit ache
   er baire shongkha she rakhte parbe na
   and that limit is 
   -2147483648 theke 2147483647 porjonto
   so the main question is, keno emon?
   int type data memory te only 4byte space nite pare
   and 4 byte = 4 × 8 bit = 32bit (as 1 byte = 8 bit)
   every ba 1 bit e amra 2 ta shongkha rakhte parbo (0 or 1) --> 2¹
   2 bit e amra 4 ta shongkha rakhte parbo --> 2²
   3 bit e amra 8 ta shongkha rakhte parbo --> 2³
   therefore 32 bit e amra 2³² = 4294967296 gulo number rakhte parbo
   now 4294967296 / 2 = 2147483648
   er jonnei -2147483648 theke 2147483647 porjonto e newa jabe highest
   */
   
   return 0;
}

int difference_between_float_and_double() 
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

int using_char_for_characters()
{
    char ch;
   
    printf("Enter the first letter of your name");
    scanf("%c", &ch);
    
    printf("%c", ch); 
        /*
        output: The first letter of inputed string
        if the inputed value is 999
        then the output is 9
        
        if the inputed value is Tahmid
        then output is T
        */
    return 0;
}