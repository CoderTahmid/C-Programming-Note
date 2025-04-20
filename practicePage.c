#include<stdio.h>

int main()
{
   char ch;
   
   printf("Enter your name:");
   ch = getchar();
   /*
   so basically this getchar() function does the same as the scanf("")
   function did
   what we did in scanf() ?
   we take a input from the user and set the value (by using &)in the 
   ch variable 
   and now this getchar is doing the same
   */
   
   printf("The first letter of your name is %c", ch);
   
   return 0;
}