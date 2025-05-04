#include <stdio.h>
/*Loops in C Programming*/

/*While Loop*/

int main()
{
   int num = 0;

   while (num <= 10){
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

   while (n <= 100){
      printf("%d\n", n);
      n++;

      if(n > 10){
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