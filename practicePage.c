#include <stdio.h>

int main()
{
   char ch = 'N';

   if (ch >= 'a' && ch <= 'z')
   {
      printf("%c is in lower case", ch);
   }
   else if (ch >= 'A' && ch <= 'Z')
   {
      printf("%c is in upper case", ch);
   }

   return 0;
}