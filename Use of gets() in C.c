#include <stdio.h>
/*
taking input of a group of string using gets()
gets() use kore basically a group of string input newa hoy
like lines 
usually scanf use kore input nile ta only one character input ney
*/

int main()
{
    char ch[100];
    printf("Input a value in array: ");
    gets(ch);
    printf("%s", ch);
    return 0;
}