#include <stdio.h>

int main() {

    int celsiusTemp;

    printf("Enter the Celsius value : ");
    scanf("%d", &celsiusTemp);

    int fahrenheitTemp = (9 * celsiusTemp) / 5 + 32;

    printf("The temparature in Fahrenheit is %d", fahrenheitTemp);

    return 0;
}
