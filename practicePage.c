#include <stdio.h>

/*Basic structure of for loop*/

int main()
{
   int num1 = 5, i;
   for (i = 1; i <= 10; i++)
   {
      printf("%d * %d = %d\n", num1, i, num1 * i);
   }
   printf("\n");

   /*We xan also use for loop like this*/
   int num2 = 3, j = 1;
   for (; j <= 10; j++)
   {
      printf("%d * %d = %d\n", num2, j, num2 * j);
   }
   printf("\n");

   /*It is also possible to run like this*/
   int num3 = 4, k = 1;
   for (;;)
   {
      printf("%d * %d = %d\n", num3, k, num3 * k);
      k++;

      if (k == 10)
      {
         break;
      };
   }
}