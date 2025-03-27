// Problem 1--> Find the Factorial of a Number
int findFactorial()
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    int factorialNumber = 1;

    for (int i = 1; i <= num; i++)
    {
        factorialNumber = factorialNumber * i;
    }

    printf("%d", factorialNumber);

    return 0;
}

// Problem 2--> Print Numbers from 1 to N 
int printNumbersFrom1ToN()
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}