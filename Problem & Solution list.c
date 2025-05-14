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

// Problem 8--> Make a multiplication table using only add operation
int multiplication_table_using_only_add_operation()
{
    int n = 5, i, j = 5;

    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, j);
        j = j + 5;
    }
}

// Problem 9--> Make multiplication table from 1 to 20 using only add operation
int multiplication_table_1_to_20_using_only_add_operation()
{
    int n, i, m, o = 0;

    for (n = 1; n <= 20; n++)
    {
        for (i = 1; i <= 10; i++)
        {
            printf("%d * %d = %d\n", n, i, n + o);
            o = o + n;
        }
        o = 0;
        printf("\n");
    }

    return 0;
}

// Problem 10--> Find out all the permutations of 1,2,3
int all_the_permutations_of_1_2_3()
{
    int a, b, c;

    for (a = 1; a <= 3; a++)
    {
        for (b = 1; b <= 3; b++)
        {
            for (c = 1; c <= 3; c++)
            {
                if (a != b && b != c && c != a)
                {
                    printf("%d, %d, %d\n", a, b, c);
                }
            }
        }
    }

    return 0;
}