#include <stdio.h>

// Array in C programming

int main()
{

    // How to define an array and use it
    int arra[10] = {10, 20, 30, 40, 50, 60};

    printf("The first element of the array is %d\n", arra[0]);
    printf("The second element of the array is %d\n", arra[1]);
    printf("%d", arra[200]); // output: garbage

    // Basic concepts of array
    int arra1[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int arra2[10] = {55, 48, 382, 37, 99, 11, 80, 70, 60, 33};

    arra2[9] = arra1[0];
    printf("%d", arra2[9]); // output: 10

    return 0;
}