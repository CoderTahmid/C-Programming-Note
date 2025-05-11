#include <stdio.h>
/*Loops in C Programming*/

/*Basic While Loop structure*/
int basic_structure_of_while_loop()
{
   int num = 0;

   while (num <= 10)
   {
      printf("%d \n", num);
      num++;
   }
   /*
   This is a simple while loop structure
   */

   return 0;
}

/*Using "break" keyword in While Loop*/
int using_break_keyword_in_while_loop()
{
   int n = 0;

   while (n <= 100)
   {
      printf("%d\n", n);
      n++;

      if (n > 10)
      {
         break;
      };
   }
   /*
   Output:
   0
   1
   2
   3
   4
   5
   6
   7
   8
   9
   10

   kono ekta loop e "break" keyword pawa gele
   sheta loop'r baire chole jay
   ekhane jokhon e n er man 10'r boro hoise
   tokhon e program ta loop'r baire chole geseh
   */

   return 0;
}

/*Basic structure of For Loop*/
int basic_structure_of_for_loop()
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

   return 0;
}