#include <stdio.h>
int main()
{   
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);
    
    int factorialNumber = 1;

    for (int i = 1 ; i <= num ; i++) {
        factorialNumber = factorialNumber * i;
    }

    printf("%d", factorialNumber);

    return 0;
}
