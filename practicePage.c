#include <stdio.h>
#include <string.h>

int main () {

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
    
    // Usage of strcmp()
    char prothomStr[] = "Apple";
    char ditiyoStr[] = "Banana";
    int cmpVal = strcmp(prothomStr, ditiyoStr);
    printf("%d\n", cmpVal); // output: -60
    /*
    ekhane first string'r sathe second string'r compare korbe
    and ei comparison ta chole character gular ASCII code'r upre base kore
    first string ta jodi boro ( talking about ASCII value ) hoy compared to 2nd string 
    tahole +ve return korbe
    first string choto hoile -ve return korbe
    and both are equal hoile 0 
    
    now ei comparison ta actually hoy kibhabe?
    there's a different process for this
    first string'r first okkhor'r sathe 
    2nd string'r first okkhor milay
    dekhe kontar ASCII boro
    jetar ASCII boro shetai boro hishabe bibechito hbe
    
    ekhane A = 65
    B = 66
    A choto houa te negative return korse
    
    jodi first okkhor same hoy tahole next okkhor compare korbe
    ebhabe pura process ta cholbe
    */
    
    return 0;
}