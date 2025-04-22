// Problem 1--> Find the Factorial of a Number
int find_factorial()
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
int print_numbers_from_1_to_n()
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
int sum_of_first_n_numbers()
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
int square_of_a_number()
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Square of the number is %d", num * num);

    return 0;
}

// Problem 5--> Convert Celsius to Fahrenheit
int celsius_to_fahrenheit()
{
    int celsiusTemp;

    printf("Enter the Celsius value : ");
    scanf("%d", &celsiusTemp);

    int fahrenheitTemp = (9 * celsiusTemp) / 5 + 32;

    printf("The temparature in Fahrenheit is %d", fahrenheitTemp);

    return 0;
}

// Problem 6--> Find the Average of Three Numbers
int find_average_of_3_numbers()
{
    int n1, n2, n3;

    printf("Enter 3 numbers : ");
    scanf("%d %d %d", &n1, &n2, &n3);

    int avg = (n1 + n2 + n3) / 3;
    printf("The average value of this 3 numbers is %d", avg);

    return 0;
}

// Problem 7--> Find if a character is in upper case or in lower case
int find_upper_case_or_lower_case()
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