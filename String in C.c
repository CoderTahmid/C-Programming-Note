#include <stdio.h>

int main()
{

    // Using fgets() for string
    char str[100];
    fgets(str, 6, stdin);
    puts(str);
    /*
    so fgets() e
    3 ra parameters ashe
    1st ta hocche variable ta, jetay amra string ta save rakhbo
    2nd ta hocche string size
    3rd ta hocche file, to amra ekhane just file hishabe stdin disi, eta dilei hbe

    tobe fgets() only abar n - 1 porjonto print korbe
    mane jei size dewa hbe tar theke 1 kom print korbe arki
    */

    // Usage of strcpy()
    char oldStr[] = "oldStr";
    char newStr[] = "newStr";
    strcpy(newStr, oldStr);
    puts(newStr); // output: oldStr
    /*
    ei strcpy()
    basically string copy korte use hoy
    newStr er value change kore dise oldStr er sathe
    */

    return 0;
}
