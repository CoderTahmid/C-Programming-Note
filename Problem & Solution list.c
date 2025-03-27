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

// Problem 3--> Find the Sum of First N Natural Numbers
int sumOfFirstNNumbers()
{
    int num, sum = 0;

    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        sum += i;
    }
    printf("%d", sum);

    return 0;
}

// Problem 4--> Find the Square of a Number
int squareOfANumber () {
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Square of the number is %d", num * num);

    return 0;
}