5

#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;  // Extract the last digit
        if (digit % 2 == 0) {  // Check if the digit is even
            sum += digit;
        }
        num /= 10;  // Remove the last digit
    }

    printf("Sum of even digits: %d\n", sum);

    return 0;
}