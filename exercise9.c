#include <stdio.h>

int main() {
    int number, digit1, digit2, digit3;
    int max_product;

    
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    
    if (number < 0) {
        number = -number;
    }

    
    digit1 = number / 100;          
    digit2 = (number / 10) % 10;    
    digit3 = number % 10;           

    
    max_product = digit1 > digit2 ? (digit1 > digit3 ? digit1 : digit3) : (digit2 > digit3 ? digit2 : digit3);

    
    if (digit1 != 0 && digit2 != 0 && digit3 != 0) {
        int product_all = digit1 * digit2 * digit3;
        if (product_all > max_product) {
            max_product = product_all;
        }
    }
    
    if (digit1 != 0 && digit2 != 0) {
        int product_12 = digit1 * digit2;
        if (product_12 > max_product) {
            max_product = product_12;
        }
    }

    if (digit1 != 0 && digit3 != 0) {
        int product_13 = digit1 * digit3;
        if (product_13 > max_product) {
            max_product = product_13;
        }
    }

    if (digit2 != 0 && digit3 != 0) {
        int product_23 = digit2 * digit3;
        if (product_23 > max_product) {
            max_product = product_23;
        }
    }

    
    printf("The maximum product of the digits is: %d\n", max_product);

    return 0;
}