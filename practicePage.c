#include <stdio.h>

int main()
{

    int n;
    char arra[100];

    scanf("%d", &n);
    fgets(arra, 100, stdin);
    fgets(arra, 100, stdin);

    printf("%d", n);
    printf("%s", arra);

    return 0;
}