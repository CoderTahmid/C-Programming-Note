#include <stdio.h>

int main() {
    int n1, n2, n3;

    printf("Enter 3 numbers : ");
    scanf("%d %d %d", &n1, &n2, &n3);

    int avg = (n1 + n2 + n3) / 3;
    printf("The average value of this 3 numbers is %d", avg);

    return 0;
}
