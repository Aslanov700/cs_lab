#include <stdio.h>

int main() {
    float x, y;

   
    printf("Enter a value for x: ");
    scanf("%f", &x);

    
    if (x > 0) {
        y = x * x - 2 * x + 3;
    } else if (x == 0) {
        y = x - 5;
    } else {
        y = x * x + 2 * x - 3;
    }

    
    printf("The value of y is: %.2f\n", y);

    return 0;
}