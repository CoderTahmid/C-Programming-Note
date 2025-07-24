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

    // Usage of strcat()
    char firstStr[100] = "Hello ";
    char secStr[] = "World";
    strcat(firstStr, secStr);
    puts(firstStr); // output: Hello World
    /*
    strcat is basically for concatination
    ekhane strcat() 2 ta parameters nibe
    then first string'r sathe 2nd string jora lagabe and
    ta first string e store korbe
    NB: firstStr er ototuk storage capacity thakte hbe jate she 2 tai store korte pare
    */

    return 0;
}
