#include <stdio.h>

// Convert uppercase to lowercase

int main() {

    char country[] = {'b', 'A', 'N', 'G', 'L', 'A', 'D', 'E', 'S', 'H', '\0'};
    printf("%s\n", country);
    
    int i, length = 10;
    
    for ( i = 0 ; i < length ; i++ ) {
        if (country[i] >= 65 && country[i] <= 90) {
            country[i] = 'a' + (country[i] - 'A');
        }
    }
    printf("%s", country);
}