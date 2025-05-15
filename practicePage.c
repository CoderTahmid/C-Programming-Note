#include <stdio.h> 

// if x + y = something and x - y = something, then x = ? and y = ?

int main() {

    int x, y, x_plus_y, x_minus_y;
    
    printf("X + Y = ");
    scanf("%d", &x_plus_y);
    
    printf("X - Y = ");
    scanf("%d", &x_minus_y);
    
    x = (x_plus_y + x_minus_y) / 2;
    y = (x_plus_y - x_minus_y) / 2;
    
    printf("The value of x is %d \n and y is %d",x ,y);
    

    return 0;
}