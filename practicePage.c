#include <stdio.h>

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