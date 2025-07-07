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

// Problem 11--> if x+y = something and x-y = something, then x=? and y=?
int value_of_X_and_Y_from_2_liniar_equation()
{
    int x, y, x_plus_y, x_minus_y;

    printf("X + Y = ");
    scanf("%d", &x_plus_y);

    printf("X - Y = ");
    scanf("%d", &x_minus_y);

    x = (x_plus_y + x_minus_y) / 2;
    y = (x_plus_y - x_minus_y) / 2;

    printf("The value of x is %d \n and y is %d", x, y);

    return 0;
}

// Problem 12--> HCF of 2 numbers
int HCF_of_2_numbers()
{
    int a, b, i, k = 0;

    printf("Enter num1: ");
    scanf("%d", &a);

    printf("Enter num2: ");
    scanf("%d", &b);

    if (a > b)
    {
        for (i = 1; i <= b; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                if (i > k)
                {
                    k = i;
                }
            }
        }
        printf("The HCF of these numbers is %d", k);
    }
    else
    {
        for (i = 1; i <= a; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                if (i > k)
                {
                    k = i;
                }
            }
        }
        printf("The HCF of these numbers is %d", k);
    }

    return 0;
}

// Problem 13--> reverse an array
int reversing_an_array()
{
    int i, j;
    int arra1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arra2[10];

    for (i = 9, j = 0; i >= 0, j < 10; i--, j++)
    {
        arra2[j] = arra1[i];
    }

    for (i = 0; i < 10; i++)
    {
        arra1[i] = arra2[i];
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", arra1[i]);
    }
}

// Problem 14--> reversing an array using only one array
int reversing_an_array_using_only_one_array()
{
    int arra[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int temp, i, j;

    for (i = 0, j = 9; i < 5; i++, j--)
    {
        temp = arra[i];
        arra[i] = arra[j];
        arra[j] = temp;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", arra[i]);
    }
}

// Problem 15--> Convert uppercase to lowercase
int uppercase_to_lowercase()
{
    char country[] = {'b', 'A', 'N', 'G', 'L', 'A', 'D', 'E', 'S', 'H', '\0'};
    printf("%s\n", country);

    int i, length = 10;

    for (i = 0; i < length; i++)
    {
        if (country[i] >= 65 && country[i] <= 90)
        {
            country[i] = 'a' + (country[i] - 'A');
        }
    }
    printf("%s", country);
}

// Problem 16--> Convert lowercase to uppercase
int lowercase_to_uppercase()
{
    char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0'};
    printf("%s\n", country);

    int i, length = 10;

    for (i = 0; i < length; i++)
    {
        if (country[i] >= 97 && country[i] <= 122)
        {
            country[i] = 'A' + (country[i] - 'a');
        }
    }
    printf("%s", country);
}

// Problem 17--> Length of a string
int string_length(char str[])
{
    int i, length = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    return length;
}

int main()
{

    char country[100];

    int length;

    printf("Enter your string: ");
    while (1 == scanf("%s", &country))
    {
        length = string_length(country);
        printf("The length of your string is %d\n", length);
        printf("Enter your string: ");
    }

    return 0;
}